using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GameUIController : MonoBehaviour {
	public Slider playerHealthSlider;
	public Slider enemyHealthSlider;
	PlayerController pc;
	EnemyController ec;

	void Start () {
		playerHealthSlider = GameObject.Find("PlayerHealthSlider").GetComponent<Slider>();
		enemyHealthSlider = GameObject.Find("EnemyHealthSlider").GetComponent<Slider>();

		pc = GameObject.Find("Sam").GetComponent<PlayerController>();
		ec = GameObject.Find("EverySize").GetComponent<EnemyController>();
	}
	

	void Update () {
		playerHealthSlider.value = (float)pc.health / 100f;
		enemyHealthSlider.value = (float)ec.health / 100f;
	}
}
