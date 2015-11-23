using UnityEngine;
using System.Collections;

public class EnemyController : MonoBehaviour
{
	Animator animator;
	public bool gotHit;
	public Transform player;
	float gotHitSpeed = 10f;
	float gotHitDistance = 10f;
	float walkSpeed = 40f;
	public AttackCubeEnter attackCube;
	public Vector3 gotHitFlyToPos;
	Vector3 queefingPosition;
	bool lerpyMovement;
	float xGo, zGo;
	public bool queefing;
	public bool doAQueef;
	public float lastSecond;
	int timesHit = 0;
	
	void Start ()
	{
		animator = this.gameObject.GetComponent<Animator> ();
		lerpyMovement = true;
		queefing = false;
		InvokeRepeating ("shouldWeQueef", .01f, 1.0f);
		InvokeRepeating ("shouldWeSignAttack", .01f, 1.0f);
//		attackCube = transform.Find("AttackCube").gameObject.GetComponent<AttackCubeEnter>();
	}

	void Update ()
	{
		lastSecond = 0f;
	}

	void FixedUpdate ()
	{


		//if not being knocked back
		if (!gotHit) {
			queefingPosition = transform.position;
			queefingPosition.x = player.position.x + 10f;
			queefingPosition.z = player.position.z;


			//if queefing, don't move
			if (queefing == false) {
				if (lerpyMovement) {
					Vector3 moveVec = queefingPosition - transform.position;

					//			this.GetComponent<CharacterController>().SimpleMove (moveVec * 100f * Time.deltaTime);
					animator.SetBool ("walking", true);
					this.GetComponent<CharacterController> ().SimpleMove (moveVec * 2f);
				} else {
					xGo = 0f;
					zGo = 0f;

					if ((queefingPosition.x - transform.position.x) > .2f)
						xGo = 1;
					else if ((queefingPosition.x - transform.position.x) < -.2f)
						xGo = -1;

					if ((queefingPosition.z - transform.position.z) > .2f)
						zGo = 1;
					else if ((queefingPosition.z - transform.position.z) < -.2f)
						zGo = -1;

					Vector3 goVec = new Vector3 (xGo, transform.position.y, zGo);
					goVec = goVec.normalized;
					animator.SetBool ("walking", true);


					if (zGo == 0 && xGo == 0) {
//					animator.SetTrigger ("signAttack");
					} else {
						this.GetComponent<CharacterController> ().SimpleMove (goVec * walkSpeed * 40f);
					}
				}
			}

			//random time-based queefing
			if (queefing == false && doAQueef == true) {
				animator.SetTrigger ("attack");
				//				player.gameObject.GetComponent<MainCharController>().getKnockedBack();
				queefing = true;
				StartCoroutine ("waitForAnimToStart");
			}

			//position-based queefing
			//fucked up now won't work gotta replace time stuff with position check
//			if(queefing == false && Mathf.Floor(Time.time) > lastSecond){
//				animator.SetTrigger("queef");
////				player.gameObject.GetComponent<MainCharController>().getKnockedBack();
//				queefing = true;
//				StartCoroutine("waitForAnimToStart");
//			}
		}

		if (gotHit == true) {
			float step = gotHitSpeed * Time.deltaTime;
			transform.position = Vector3.Lerp (transform.position, gotHitFlyToPos, step);
			if ((transform.position - gotHitFlyToPos).magnitude < .1f)
				gotHit = false;
		}
	}

	public void takeHit ()
	{
		print ("enemy: " + (++timesHit));
		gotHit = true;
		gotHitFlyToPos = new Vector3 (transform.position.x + gotHitDistance, transform.position.y, transform.position.z);
	}

	IEnumerator waitForAnimToStart ()
	{
		while (true) {
			if (gameObject.GetComponent<Animator> ().GetCurrentAnimatorStateInfo (0).IsName ("Attack")) {
				StartCoroutine ("waitForAnimToEnd");
				yield break;
			}
			yield return null;
		}
	}
	
	IEnumerator waitForAnimToEnd ()
	{
		while (true) {

			//check if player is in attack cone
			attackCube.attackCubeActive = true;

			if (!gameObject.GetComponent<Animator> ().GetCurrentAnimatorStateInfo (0).IsName ("Attack")) {
				queefing = false;
//				StartCoroutine("waitForExplosionToEnd");

				//attack over. make player not get knocked back anymore
				attackCube.attackCubeActive = false;

				yield break;
			}
			yield return null;
		}
	}

	void shouldWeQueef ()
	{
		if (Random.Range (0f, 1f) < 0.1f)
			doAQueef = true;
		else
			doAQueef = false;
	}

	void shouldWeSignAttack ()
	{
		if (Random.Range (0f, 1f) < 0.8f)
			animator.SetTrigger ("signAttack");
	}
}
