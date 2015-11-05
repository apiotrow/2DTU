using UnityEngine;
using System.Collections;

public class CharController : MonoBehaviour {
	CharacterController controller;
	float speed = 10f;

	void Start () {
		controller = GetComponent<CharacterController>();
	}
	

	void Update () {
		//apply gravity
		if(!controller.isGrounded){
			controller.SimpleMove(new Vector3(0f, -speed, 0f));
		}

		//up
		if (Input.GetKey (KeyCode.W)) {
			controller.SimpleMove(new Vector3(0f, 0f, speed));
		} else if (Input.GetKeyUp (KeyCode.W)) {

		}

		//down
		if (Input.GetKey (KeyCode.S)) {
			controller.SimpleMove(new Vector3(0f, 0f, -speed));
		} else if (Input.GetKeyUp (KeyCode.S)) {
			
		}

		//left
		if (Input.GetKey (KeyCode.A)) {
			controller.SimpleMove(new Vector3(-speed, 0f, 0f));
		} else if (Input.GetKeyUp (KeyCode.S)) {
			
		}

		//right
		if (Input.GetKey (KeyCode.D)) {
			controller.SimpleMove(new Vector3(speed, 0f, 0f));
		} else if (Input.GetKeyUp (KeyCode.S)) {
			
		}
	}
}
