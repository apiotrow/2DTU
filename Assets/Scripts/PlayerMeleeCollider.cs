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
			o.gameObject.GetComponent<EnemyController>().takeHit();
			playerController.performHit();
		}
	}
}