using UnityEngine;
using System.Collections;

public class AttackCubeEnter : MonoBehaviour {
	public bool attackCubeActive = false;

	void OnTriggerStay(Collider o)
	{
		if(attackCubeActive){
			if(o.gameObject.GetComponent<MainCharController>() != null){
				o.gameObject.GetComponent<MainCharController>().getKnockedBack();
			}
		}
	}

	void OnCollisionEnter(Collision o)
	{
//		if(attackCubeActive){
//			if(o.gameObject.GetComponent<MainCharController>() != null){
//				o.gameObject.GetComponent<MainCharController>().getKnockedBack();
//			}
//		}
	}
}
