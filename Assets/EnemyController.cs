using UnityEngine;
using System.Collections;

public class EnemyController : MonoBehaviour {
	Animator animator;
	public bool gotHit;
	public Transform player;
	public float gotHitSpeed = 10f;
	public float walkSpeed = 20f;
	Vector3 gotHitFlyToPos;
	Vector3 queefingPosition;
	public bool lerpyMovement = true;
	float xGo, zGo;
	
	void Start () {
		animator = this.gameObject.GetComponent<Animator>();
	}

	void Update(){

	}

	void FixedUpdate () {
		if(!gotHit){
			queefingPosition = transform.position;
			queefingPosition.x = player.position.x + 20f;
			queefingPosition.z = player.position.z;


			if(lerpyMovement){
				Vector3 moveVec = queefingPosition - transform.position;

	//			this.GetComponent<CharacterController>().SimpleMove (moveVec * 100f * Time.deltaTime);
				this.GetComponent<CharacterController>().SimpleMove (moveVec * 2f);
			}else{
				xGo = 0f;
				zGo = 0f;

				if((queefingPosition.x - transform.position.x) > .2f)
					xGo = walkSpeed;
				else if((queefingPosition.x - transform.position.x) < -.2f)
					xGo = -walkSpeed;

				if((queefingPosition.z - transform.position.z) > .2f)
					zGo = walkSpeed;
				else if((queefingPosition.z - transform.position.z) < -.2f)
					zGo = -walkSpeed;

				this.GetComponent<CharacterController>().SimpleMove(new Vector3(xGo, transform.position.y, zGo) * 0.5f);
			}

			if((transform.position - queefingPosition).magnitude < .2f)
				animator.SetTrigger("queef");
		}

		if(gotHit == true){
			float step = gotHitSpeed * Time.deltaTime;
			transform.position = Vector3.Lerp(transform.position, gotHitFlyToPos, step);
			if((transform.position - gotHitFlyToPos).magnitude < .1f) gotHit = false;
		}
	}

	public void takeHit(){
		gotHit = true;
		gotHitFlyToPos = new Vector3(transform.position.x + 10f, transform.position.y, transform.position.z);
	}
}
