using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.SceneManagement;

public class UIActions : MonoBehaviour
{
    private AudioMixer _mixer;
    private string _key;
    
    public void LoadScene(string name) => SceneManager.LoadScene(name);
    public void Exit() => Application.Quit();
    public void SetMixer(AudioMixer mixer) => _mixer = mixer;
    public void SetKey(string key) => _key = key;

    public void BuildVolume(int volume)
    {
        if (_mixer == null || _key == null)
            throw new MissingReferenceException();
        _mixer.SetFloat(_key, volume);
    }
}
