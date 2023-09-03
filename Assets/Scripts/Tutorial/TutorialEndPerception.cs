using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TutorialEndPerception : MonoBehaviour
{
    [SerializeField] private AnimatorController _animatorController;
    [SerializeField] private GameObject _successParticlePrefab;


    private void OnCollisionEnter(Collision collision)
    {

        Debug.Log("Collided with: " + collision.gameObject.name + ", Layer: " + LayerMask.LayerToName(collision.gameObject.layer));
        // Player ���̾�� �浹���� �� �ִϸ��̼� ����
        if (collision.gameObject.layer == LayerMask.NameToLayer("Player"))
        {
            StartCoroutine(LoadSceneAfterDelay());

            _animatorController.PlaySuccess();
            AudioManager.Instance.PlaySFX("Success");
            GameObject particleInstance = Instantiate(_successParticlePrefab, transform.position + Vector3.up * 10f, Quaternion.identity);
            Destroy(particleInstance, 2f);
        }
    }

    private IEnumerator LoadSceneAfterDelay()
    {
        yield return new WaitForSeconds(4f);
        SceneManager.LoadScene("StagesScene"); 
    }
}
