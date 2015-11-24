using UnityEngine;
using System.Collections;

public class CameraFocus : MonoBehaviour {
	public Transform[] thingsToFocus;
	public Transform thePit;
	Color fogStartColor;
	float fogInitialEndDistance;

	void Start(){
		fogStartColor = RenderSettings.fogColor;
		fogInitialEndDistance = RenderSettings.fogEndDistance;
	}

	void Update () {
		float avgX = 0f;

		for(int i = 0; i < thingsToFocus.Length; i++){
			avgX += thingsToFocus[i].position.x;
		}

		avgX /= thingsToFocus.Length;

		Vector3 newCameraPos = new Vector3(avgX, transform.position.y, transform.position.z);

		transform.position = Vector3.Lerp(transform.position, newCameraPos, Time.deltaTime);

		if(Mathf.Abs((transform.position.x - thePit.position.x)) < 30f){
			RenderSettings.fogColor = Color.Lerp(RenderSettings.fogColor, Color.black, Time.deltaTime);
			RenderSettings.fogEndDistance = Mathf.Lerp(RenderSettings.fogEndDistance, 114f, Time.deltaTime);
		}else{
			RenderSettings.fogColor = Color.Lerp(RenderSettings.fogColor, fogStartColor, Time.deltaTime);
			RenderSettings.fogEndDistance = Mathf.Lerp(RenderSettings.fogEndDistance, fogInitialEndDistance, Time.deltaTime);

		}
	}
}
