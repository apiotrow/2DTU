using UnityEngine;
using System.Collections;

public class CameraFocus : MonoBehaviour {
	public Transform[] thingsToFocus;
	public Transform thePit;
	public Transform valhalla;
	Color fogStartColor;
	float fogInitialEndDistance;
	float fogPitAndValhallaEndDistance = 90f;
	float centerX; //dead center of walkway

	void Start(){;
		fogStartColor = convertColor32ToColor(100f, 100f, 100f, 255f); //grey
		fogInitialEndDistance = RenderSettings.fogEndDistance;
		centerX = transform.position.x; //using initial camera position as center
	}

	void Update () {
		updateCameraPosition();
		updateFog();
	}

	void updateCameraPosition(){
		//get center point of all points of focus and move camera to it
		float avgX = 0f;
		float avgZ = 0f;
		for(int i = 0; i < thingsToFocus.Length; i++){
			avgX += thingsToFocus[i].position.x;
			avgZ += thingsToFocus[i].position.z;
		}
		avgX /= thingsToFocus.Length;
		avgZ /= thingsToFocus.Length;
		Vector3 newCameraPos = new Vector3(avgX, transform.position.y, transform.position.z);
//		Vector3 newCameraPos = new Vector3(avgX, transform.position.y, avgZ - 50f);
		transform.position = Vector3.Lerp(transform.position, newCameraPos, Time.deltaTime * 3f);
	}

	void updateFog(){
		//calculate how close we are to either end of the map as a percent
		float percentDistToThaPit = (transform.position.x - centerX) / (thePit.position.x - centerX);
		float percentDistToValhalla = (transform.position.x - centerX) / (valhalla.position.x - centerX);
		
		//the interval from the fog distance at dead center, to the fog distance at either end
		//of the map
		float fogInterval = fogInitialEndDistance - fogPitAndValhallaEndDistance;
		
		float newEndDistance = fogInitialEndDistance; //only initializing to prevent errors
		float newRGB = 0f; //only initializing to prevent errors
		Color newFogColor = new Color(0f, 0f, 0f, 1f); //only initializing to prevent errors
		//if going towards tha pit
		if(transform.position.x > centerX){
			newEndDistance = fogInitialEndDistance - (percentDistToThaPit * fogInterval);
			
			//calculate new color based on distance to tha pit
			newRGB = (100f / 255f) - ((percentDistToThaPit * 100f) / 255f);
			//if going towards valhalla
		}else{
			newEndDistance = fogInitialEndDistance - (percentDistToValhalla * fogInterval);
			
			//calculate new color based on distance to valhalla
			newRGB = (100f / 255f) - ((percentDistToThaPit * 125f) / 255f);
		}
		
		//make the color change more powerful
		newRGB *= 1.5f;
		
		//don't let RGB colors leave the [0,1] bounds
		if(newRGB < 0f) newRGB = 0f;
		if(newRGB > 1f) newRGB = 1f;
		
		//causes a shift to blue when walking left, and red when walking right
		newFogColor.r = (100f / 255f) * 1.5f;
		newFogColor.g = newRGB;
		newFogColor.b = newRGB;
		
		//don't let fog end distance get less than dog start distance. it makes the fog dissappear.
		if(newEndDistance < RenderSettings.fogStartDistance) 
			newEndDistance = RenderSettings.fogStartDistance;
		
		//set new values
		RenderSettings.fogColor = newFogColor;
		RenderSettings.fogEndDistance = newEndDistance;
	}

	Color convertColor32ToColor(float r, float g, float b, float a){
		return new Color(r/255f, b/255f, g/255f, a/255f);
	}
}
