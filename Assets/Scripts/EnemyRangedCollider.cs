using UnityEngine;
using System.Collections;

public class EnemyRangedCollider : MonoBehaviour {
	public bool colliderEnabled = false;

	void OnTriggerStay(Collider o)
	{
		if(colliderEnabled){
			if(o.gameObject.GetComponent<PlayerController>() != null){
				o.gameObject.GetComponent<PlayerController>().takeHit();
			}
		}
	}
}
