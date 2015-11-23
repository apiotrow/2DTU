﻿using UnityEngine;
using System.Collections;

public class WeaponCollide : MonoBehaviour {
	public MainCharController charController;

	void Start () {
	
	}

	void Update () {
	
	}

	void OnTriggerEnter(Collider o)
	{
		if(o.gameObject.GetComponent<EnemyController>() != null){
			o.gameObject.GetComponent<EnemyController>().takeHit();
			charController.performHit();
		}

	}
}
