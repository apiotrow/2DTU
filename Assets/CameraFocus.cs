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

	void Start(){
//		fogStartColor = RenderSettings.fogColor;
		fogStartColor = new Color32(100, 100, 100, 255);
		fogInitialEndDistance = RenderSettings.fogEndDistance;
		centerX = transform.position.x;
	}

	void Update () {

		float avgX = 0f;

		//get center point of all points of focus
		for(int i = 0; i < thingsToFocus.Length; i++){
			avgX += thingsToFocus[i].position.x;
		}

		avgX /= thingsToFocus.Length;

		Vector3 newCameraPos = new Vector3(avgX, transform.position.y, transform.position.z);

		transform.position = Vector3.Lerp(transform.position, newCameraPos, Time.deltaTime);

		//calculate new fog end distance, based on where players are between center
		//of map and the end
		float percentDistToThaPit = (transform.position.x - centerX) / (thePit.position.x - centerX);
		float percentDistToValhalla = (transform.position.x - centerX) / (valhalla.position.x - centerX);

		//the interval from the fog distance at dead center, to the fog distance at either end
		//of the map
		float fogInterval = fogInitialEndDistance - fogPitAndValhallaEndDistance;

		float newEndDistance = fogInitialEndDistance; //only initializing to prevent errors
		float newRGB = 0f; //only initializing to prevent errors
		//if going towards tha pit
		if(transform.position.x > centerX){
			newEndDistance = fogInitialEndDistance - (percentDistToThaPit * fogInterval);

			//calculate new color based on distance to tha pit
			newRGB = (100f / 255f) - ((percentDistToThaPit * 100f) / 255f);
		//if going towards valhalla
		}else{
			newEndDistance = fogInitialEndDistance - (percentDistToValhalla * fogInterval);

			//calculate new color based on distance to valhalla
			newRGB = (100f / 255f) - ((percentDistToThaPit * 100f) / 255f);
		}

		newRGB *= 1.5f;
		if(newRGB < 0f) newRGB = 0f;
		if(newRGB > 1f) newRGB = 1f;

		//don't let end get less than start. it makes the fog dissappear.
		if(newEndDistance < RenderSettings.fogStartDistance) 
			newEndDistance = RenderSettings.fogStartDistance;

		//set new values
		RenderSettings.fogColor = new Color(newRGB, newRGB, newRGB, 1f);
		RenderSettings.fogEndDistance = newEndDistance;

	}

	Color convertColor(float r, float g, float b, float a){
		return new Color(r/255f, b/255f, g/255f, a/255f);
	}
}
