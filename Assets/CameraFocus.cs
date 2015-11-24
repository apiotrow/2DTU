using UnityEngine;
using System.Collections;

public class CameraFocus : MonoBehaviour {
	public Transform[] thingsToFocus;

	void Update () {
		float avgX = 0f;

		for(int i = 0; i < thingsToFocus.Length; i++){
			avgX += thingsToFocus[i].position.x;
		}

		avgX /= thingsToFocus.Length;

		Vector3 newCameraPos = new Vector3(avgX, transform.position.y, transform.position.z);

		transform.position = Vector3.Lerp(transform.position, newCameraPos, Time.deltaTime);
	}
}
