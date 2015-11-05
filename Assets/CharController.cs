using UnityEngine;
using System.Collections;

public class CharController : MonoBehaviour {
	CharacterController controller;
	float speed = 10f;
	Animator animator;
	bool u, d, l, r;

	void Start () {
		controller = GetComponent<CharacterController>();
		animator = transform.Find("Animation").GetComponent<Animator>();
		u = false;
		d = false;
		l = false;
		r = false;
	}
	

	void Update () {
		//apply gravity
		if(!controller.isGrounded){
			controller.SimpleMove(new Vector3(0f, -speed, 0f));
		}

		u = false;
		d = false;
		l = false;
		r = false;


		//up
		if (Input.GetKey (KeyCode.W)) {
			u = true;
		}
		//down
		if (Input.GetKey (KeyCode.S)) {
			d = true;
		}
		//left
		if (Input.GetKey (KeyCode.A)) {
			l = true;
		}
		//right
		if (Input.GetKey (KeyCode.D)) {
			r = true;
		}

//		f(onlyUp()){
//			keyOne = "u";
//		}else if(onlyDown()){
//			keyOne = "d";
//		}else if(onlyLeft()){
//			keyOne = "l";
//		}else if(onlyRight()){
//			keyOne = "r";
//		}








		//up
		if (u) {
			controller.SimpleMove(new Vector3(0f, 0f, speed));
			animator.Play("GirlWalkUp");
		} else if (Input.GetKeyUp (KeyCode.W)) {

		}

		//down
		if (d) {
			controller.SimpleMove(new Vector3(0f, 0f, -speed));
			animator.Play("GirlWalkDown");
		} else if (Input.GetKeyUp (KeyCode.S)) {
			
		}

		//left
		if (l) {
			controller.SimpleMove(new Vector3(-speed, 0f, 0f));
			animator.Play("GirlWalkLeft");
		} else if (Input.GetKeyUp (KeyCode.S)) {
			
		}

		//right
		if (r) {
			controller.SimpleMove(new Vector3(speed, 0f, 0f));
			animator.Play("GirlWalkRight");
		} else if (Input.GetKeyUp (KeyCode.S)) {
		
		}

		if(Input.GetKeyUp(KeyCode.W)){
			animator.SetTrigger("Idle");
		}


	}

//	bool onlyUp(){
//		if(u && !d && !r && !l){
//			return true;
//		}
//	}
//	bool onlyDown(){
//		if(!u && d && !r && !l){
//			return true;
//		}
//	}
//	bool onlyLeft(){
//		if(!u && !d && !r && l){
//			return true;
//		}
//	}
//	bool onlyRight(){
//		if(!u && !d && r && !l){
//			return true;
//		}
//	}
}
