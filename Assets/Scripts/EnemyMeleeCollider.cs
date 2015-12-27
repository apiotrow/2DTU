using UnityEngine;
using System.Collections;

public class EnemyMeleeCollider : MonoBehaviour {

	void OnTriggerEnter(Collider o)
	{
		if(o.gameObject.GetComponent<PlayerController>() != null){
			o.gameObject.GetComponent<PlayerController>().takeHit(-20f);
		}
	}
}
