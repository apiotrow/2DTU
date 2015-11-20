using UnityEngine;
using System.Collections;

public class MainCharController : MonoBehaviour {
	CharacterController controller;
	Animator animator;
	float walkSpeed = 10f;
	bool u, d, l, r;
	float xGo, yGo, zGo;
//	bool isWalking = false;

	void Start () {
		controller = GetComponent<CharacterController>();
		animator = GetComponent<Animator>();
	}


	void Update () {
		if (Input.GetKeyDown (KeyCode.Space)) {
			animator.SetTrigger("attack");
		}

		u = false;
		d = false;
		l = false;
		r = false;
		xGo = 0f;
		yGo = 0f;
		zGo = 0f;
//		isWalking = false;
		animator.SetBool("walking", false);

		if (Input.GetKey (KeyCode.A)) {
			l = true;
			animator.SetBool("walking", true);
		}
		if (Input.GetKey (KeyCode.S)) {
			d = true;
			animator.SetBool("walking", true);
		}
		if (Input.GetKey (KeyCode.W)) {
			u = true;
			animator.SetBool("walking", true);
		}
		if (Input.GetKey (KeyCode.D)) {
			r = true;
			animator.SetBool("walking", true);
		}

		if(l)
			xGo = -walkSpeed;
		if(d)
			zGo = -walkSpeed;
		if(r)
			xGo = walkSpeed;
		if(u)
			zGo = walkSpeed;

		controller.SimpleMove(new Vector3(xGo, yGo, zGo));
	}
}
