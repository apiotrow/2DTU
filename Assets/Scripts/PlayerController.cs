using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	public ParticleSystem[] hitEnemyParticleSystem;
	
	float walkSpeed = 30f;
	float gotHitSpeed = 5f;

	public int health;
	public float privPower = 0f;

	CharacterController controller;
	public Animator animator;
	bool u, d, l, r;
	float xGo, yGo, zGo;
	bool gotHit;
	Vector3 gotHitFlyToPos;
	bool readyToTakeDmgAgain;

	void Start () {
		controller = GetComponent<CharacterController>();
		animator = GetComponent<Animator>();
		health = 100;
		readyToTakeDmgAgain = true;
	}

	void Update(){
	

		//knockback
		if(gotHit == true){
			float step = gotHitSpeed * Time.deltaTime;
			transform.position = Vector3.Lerp(transform.position, gotHitFlyToPos, step);

			//threshhold keeps player from slowing down too much near end of knockback
			if((transform.position - gotHitFlyToPos).magnitude < 2f){
				gotHit = false;
				readyToTakeDmgAgain = true;
			}
		}


		if (Input.GetKeyDown (KeyCode.Mouse0) || Input.GetKeyDown (KeyCode.Space)) {
			animator.SetTrigger("attack");
		}
		
		if(Input.GetKey (KeyCode.Mouse1)){
			animator.SetBool("blocking", true);
		}
		if(Input.GetKeyUp(KeyCode.Mouse1))
			animator.SetBool("blocking", false);
		
		
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
		
		//if we're being knocked back, make player lose control.
		//if we're blocking, make player not be able to move
		if(!gotHit /*&& !animator.GetBool("blocking")*/)
			controller.SimpleMove(new Vector3(xGo, yGo, zGo));

	}


	public void performHit(){
		privPower += 1;

		for(int i = 0; i < hitEnemyParticleSystem.Length; i++){
			hitEnemyParticleSystem[i].Play ();
		}
	}

	public void takeHit(){
		if(privPower > 0)
			privPower -= 1;

		if(readyToTakeDmgAgain == true){
			health -= 5;
			readyToTakeDmgAgain = false;
		}

		//if blocking, don't get knocked back
		if(animator.GetBool("blocking") == false){
			gotHit = true;
			gotHitFlyToPos = new Vector3(transform.position.x + -20f, transform.position.y, transform.position.z);
		}
	}
}
