using UnityEngine;
using System.Collections;

public class MainCharController : MonoBehaviour {
	CharacterController controller;
//	public GameObject weapon;
	Animator animator;
	float walkSpeed = 20f;
	public float gotHitSpeed = 10f;
	bool u, d, l, r;
	float xGo, yGo, zGo;
	public ParticleSystem[] hitEnemyParticleSystem;
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
			if(transform.position == gotHitFlyToPos) gotHit = false;
		}
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

	public void performHit(){
		for(int i = 0; i < hitEnemyParticleSystem.Length; i++){
			hitEnemyParticleSystem[i].Play ();
		}
	}

	public void getKnockedBack(){
		gotHit = true;
		gotHitFlyToPos = new Vector3(transform.position.x + -10f, transform.position.y, transform.position.z);
	}
}
