﻿using UnityEngine;
using System.Collections;

public class PlayerMeleeCollider : MonoBehaviour {
	public PlayerController playerController;

	void Start(){
		playerController = transform.parent.gameObject.GetComponent<PlayerController>();
	}

	void OnTriggerEnter(Collider o)
	{
		if(o.gameObject.GetComponent<EnemyController>() != null){
			o.gameObject.GetComponent<EnemyController>().takeHit(Random.Range(15f, 30f));
//			o.gameObject.GetComponent<EnemyController>().takeHit(playerController.privPower * 3f);

			playerController.performHit();
		}
	}
}
