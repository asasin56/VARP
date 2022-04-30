using Entitas;
using Entitas.CodeGeneration.Attributes;
using Meta.Configuration;
using UnityEngine;

namespace Game
{
    [Unique] [Game] public class PlayerComponent : IComponent { public GameObject Value; }
    [Unique] [Game] public class ResourcesComponent : IComponent { public GameConfig Value; }
    [Unique] [Game] public class  CameraComponent : IComponent { public Camera Value; }
    
    [Unique] [Game] public class CharacterControllerComponent : IComponent { public CharacterController Value; }
    
    [Unique] [Game] public class JoystickComponent : IComponent { public Joystick Value; }
    [Game] [Unique] public class JumpEventComponent : IComponent { }
    
    [Game] [Unique] public class SpawnPosition : IComponent { public Vector3 Value; }

    [Game] [Unique] public class OnPlayerGroundEventComponent : IComponent { }
    [Game] [Unique] public  class  Jumping : IComponent { }

    }