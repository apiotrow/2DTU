using UnityEngine;
using System.Collections;

public class EnemyController : MonoBehaviour {
	public bool gotHit;
	public float gotHitSpeed = 10f;
	public Vector3 gotHitFlyToPos;
	
	void Start () {

	}

	void FixedUpdate () {
		if(gotHit == true){
			float step = gotHitSpeed * Time.deltaTime;
			transform.position = Vector3.Lerp(transform.position, gotHitFlyToPos, step);
			if(transform.position == gotHitFlyToPos) gotHit = false;
		}
	}

	public void takeHit(){
		gotHit = true;
		gotHitFlyToPos = new Vector3(transform.position.x + 10f, transform.position.y, transform.position.z);
	}
}
