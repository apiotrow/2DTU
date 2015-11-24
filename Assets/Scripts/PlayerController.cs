using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	public ParticleSystem[] hitEnemyParticleSystem;

	float walkSpeed = 20f;
	float gotHitSpeed = 5f;

	CharacterController controller;
	Animator animator;
	bool u, d, l, r;
	float xGo, yGo, zGo;
	bool gotHit;
	Vector3 gotHitFlyToPos;

	void Start () {
		controller = GetComponent<CharacterController>();
		animator = GetComponent<Animator>();
	}

	void FixedUpdate(){
		if(gotHit == true){
			float step = gotHitSpeed * Time.deltaTime;
			transform.position = Vector3.Lerp(transform.position, gotHitFlyToPos, step);
			if((transform.position - gotHitFlyToPos).magnitude < 2f) gotHit = false;
		}
	}

	void Update () {
		if (Input.GetKeyDown (KeyCode.Mouse0) || Input.GetKeyDown (KeyCode.Space)) {
			animator.SetTrigger("attack");
		}

		u = false;
		d = false;
		l = false;
		r = false;
		xGo = 0f;
		yGo = 0f;
		zGo = 0f;

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

		//if we're being knocked back, make player lose control
		if(!gotHit)
			controller.SimpleMove(new Vector3(xGo, yGo, zGo));
	}

	public void performHit(){
		for(int i = 0; i < hitEnemyParticleSystem.Length; i++){
			hitEnemyParticleSystem[i].Play ();
		}
	}

	public void takeHit(){
		gotHit = true;
		gotHitFlyToPos = new Vector3(transform.position.x + -20f, transform.position.y, transform.position.z);
	}

}
