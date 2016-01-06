using UnityEngine;
using System.Collections;

public class Ahmed_ThrowClock : MonoBehaviour {
	Animator animator;
	public ParticleSystem[] pss;
	public Transform explosionHolder;
	bool readyToThrowClock = true;
	
	void Start () {
		animator = GetComponent<Animator>();
		InvokeRepeating("AhmedThrow", 1f, 4f);
	}

	void AhmedThrow(){
		animator.SetTrigger("throwClock");
		StartCoroutine("waitForThrowToStart");
	}

	void Update () {
		if (Input.GetKeyDown (KeyCode.R)) {
			animator.SetTrigger("throwClock");
			StartCoroutine("waitForThrowToStart");
		}
	}

	IEnumerator waitForThrowToStart(){

		while(true){
			if(gameObject.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("ahmed_throwClock")){
				StartCoroutine("waitForThrowToEnd");
				yield break;
			}
			yield return null;
		}
	}

	IEnumerator waitForThrowToEnd(){
		while(true){
			if(!gameObject.GetComponent<Animator>().GetCurrentAnimatorStateInfo(0).IsName("ahmed_throwClock")){
				for(int i = 0; i < pss.Length; i++){
					pss[i].Play ();
				}
				StartCoroutine("waitForExplosionToEnd");
				yield break;
			}
			yield return null;
		}
	}

	IEnumerator waitForExplosionToEnd(){
		bool explosionsStillPlaying;
		explosionHolder.parent = null; //detach explosion from ahmed
		readyToThrowClock = false; //must wait until we reattach to attack again

		while(true){
			explosionsStillPlaying = false;
			for(int i = 0; i < pss.Length; i++){
				if(!pss[i].isStopped){
					explosionsStillPlaying = true;
					break;
				}
			}

			if(explosionsStillPlaying == false){
				//put explosion back on ahmed
				explosionHolder.parent = this.transform;
				explosionHolder.transform.localPosition = new Vector3(0f, 0f, 0f);
				readyToThrowClock = true;
				yield break;
			}
			yield return null;
		}
	}
}
