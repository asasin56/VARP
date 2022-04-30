
using UnityEngine;
using UnityEngine.SceneManagement;

public class FinishCollider : MonoBehaviour
{
   private void OnTriggerEnter(Collider other)
   {
      if (other.TryGetComponent(out PlayerTag tag))
      {
         Application.Quit();
      }
   } 
}
