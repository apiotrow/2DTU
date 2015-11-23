using UnityEngine;
using System.Collections;

public class EnemyWeaponCollide : MonoBehaviour {
	public MainCharController charController;
	
	void OnTriggerEnter(Collider o)
	{
		if(o.gameObject.GetComponent<MainCharController>() != null){
			o.gameObject.GetComponent<MainCharController>().getKnockedBack();
//			charController.performHit();
		}
		
	}
}
