using UnityEngine;
using System.Collections;

public class EnemyController : MonoBehaviour
{

	public bool gettingKnockedBack;
	public Transform player;
	public EnemyRangedCollider enemyRangedCollider;

	Animator animator;

	float gotHitSpeed = 10f;
	float gotHitDistance = 10f;
	float walkSpeed = 40f;

	float meleeFrequency = 0.75f;
	float rangedFrequency = 0.1f;

	Vector3 gotHitFlyToPos;
	bool lerpyMovement;
	float xGo, zGo;
	bool rangedAttacking;
	bool wantToDoARanged;
	int timesHit = 0;
	
	void Start ()
	{
		animator = this.gameObject.GetComponent<Animator> ();
		lerpyMovement = true;
		rangedAttacking = false;
		InvokeRepeating ("shouldWeRanged", .01f, 1.0f);
		InvokeRepeating ("shouldWeMelee", .01f, 1.0f);
	}

	void lerpToPlayer (Vector3 toPos)
	{
		Vector3 moveVec = toPos - transform.position;
		animator.SetBool ("walking", true);
		this.GetComponent<CharacterController> ().SimpleMove (moveVec * 2f);
	}

	void linearMoveToPlayer (Vector3 toPos)
	{
		xGo = 0f;
		zGo = 0f;
		
		if ((toPos.x - transform.position.x) > .2f)
			xGo = 1;
		else if ((toPos.x - transform.position.x) < -.2f)
			xGo = -1;
		
		if ((toPos.z - transform.position.z) > .2f)
			zGo = 1;
		else if ((toPos.z - transform.position.z) < -.2f)
			zGo = -1;
		
		Vector3 goVec = new Vector3 (xGo, transform.position.y, zGo);
		goVec = goVec.normalized;
		animator.SetBool ("walking", true);
		
		
		if (zGo == 0 && xGo == 0) {
			//don't move if we're at destination
		} else {
			this.GetComponent<CharacterController> ().SimpleMove (goVec * walkSpeed * 40f);
		}
	}

	void moveEnemyToPlayer ()
	{
		//setup goto location
		Vector3 inFrontOfPlayerPosition = transform.position;
		inFrontOfPlayerPosition.x = player.position.x + 10f;
		inFrontOfPlayerPosition.z = player.position.z;
			
		if (lerpyMovement) {
			lerpToPlayer (inFrontOfPlayerPosition);
		} else {
			linearMoveToPlayer (inFrontOfPlayerPosition);
		}
	}

	void FixedUpdate ()
	{
		//if not being knocked back, let us move
		if (!gettingKnockedBack) {

			//if in the middle of a ranged attack, don't move
			if (!rangedAttacking) {
				moveEnemyToPlayer ();
			}

			//if not attacking
			if (!rangedAttacking && wantToDoARanged) {
				animator.SetTrigger ("ranged");
				rangedAttacking = true;
				StartCoroutine ("waitForAnimToStart", "Ranged");
			}
		}

		if (gettingKnockedBack == true) {
			float step = gotHitSpeed * Time.deltaTime;
			transform.position = Vector3.Lerp (transform.position, gotHitFlyToPos, step);
			if ((transform.position - gotHitFlyToPos).magnitude < .1f)
				gettingKnockedBack = false;
		}
	}

	public void takeHit ()
	{
		gettingKnockedBack = true;
		gotHitFlyToPos = new Vector3 (transform.position.x + gotHitDistance, transform.position.y, transform.position.z);
	}

	//waits for animation to start
	IEnumerator waitForAnimToStart (string attackName)
	{
		while (true) {
			if (gameObject.GetComponent<Animator> ().GetCurrentAnimatorStateInfo (0).IsName (attackName)) {
				StartCoroutine ("waitForAnimToEnd", attackName);
				yield break;
			}
			yield return null;
		}
	}

	//for when animation is being run
	IEnumerator waitForAnimToEnd (string attackName)
	{
		while (true) {
			enemyRangedCollider.colliderEnabled = true;
			if (!gameObject.GetComponent<Animator> ().GetCurrentAnimatorStateInfo (0).IsName (attackName)) {
				rangedAttacking = false;

				//attack over. disable attack cube
				enemyRangedCollider.colliderEnabled = false;

				yield break;
			}
			yield return null;
		}
	}

	void shouldWeRanged ()
	{
		if (Random.Range (0f, 1f) < rangedFrequency)
			wantToDoARanged = true;
		else
			wantToDoARanged = false;
	}

	void shouldWeMelee ()
	{
		if (Random.Range (0f, 1f) < meleeFrequency)
			animator.SetTrigger ("melee");
	}
}
