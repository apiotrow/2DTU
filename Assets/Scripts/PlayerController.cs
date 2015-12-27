using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour {
	public ParticleSystem[] hitEnemyParticleSystem;
	
	float walkSpeed = 50f;
	float gotHitSpeed = 5f;

	public int health;
	public float privPower = 0f;

	CharacterController controller;
	Animator animator;
	bool u, d, l, r;
	float xGo, yGo, zGo;
	bool gotHit;
	Vector3 gotHitFlyToPos;
	bool readyToTakeDmgAgain;

	bool allowAttack = true; //for when we're in middle of attack and don't want to let another one happen

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

		if(allowAttack){
			if (Input.GetKeyDown (KeyCode.LeftArrow)) {
				animator.SetTrigger("melee");
				allowAttack = false;
				StartCoroutine ("waitForAnimToStart", "Sam_Melee");
			}

			if (Input.GetKeyDown (KeyCode.DownArrow)) {
				animator.SetTrigger("whirlwind");
				allowAttack = false;
				StartCoroutine ("waitForAnimToStart", "Sam_Whirlwind");
			}
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

	public void takeHit(float dist){
//		if(privPower > 0)
//			privPower -= 1;

		if(readyToTakeDmgAgain == true){
			health -= 5;
			readyToTakeDmgAgain = false;
		}

		//if blocking, don't get knocked back
		if(animator.GetBool("blocking") == false){
			gotHit = true;
			gotHitFlyToPos = new Vector3(transform.position.x + dist, transform.position.y, transform.position.z);
		}
	}

	#region animationWaiter
	IEnumerator waitForAnimToStart (string attackName)
	{
		while (true) {
			if (animator.GetCurrentAnimatorStateInfo (0).IsName (attackName)) {
				StartCoroutine ("waitForAnimToEnd", attackName);
				print (allowAttack);
				yield break;
			}
			yield return null;
		}
	}
	
	IEnumerator waitForAnimToEnd (string attackName)
	{
		
		while (true) {
			if (!animator.GetCurrentAnimatorStateInfo (0).IsName (attackName)) {
				allowAttack = true;
				yield break;
			}
			yield return null;
		}
	}
	#endregion animationWaiter
}
