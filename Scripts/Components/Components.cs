using System.Collections.Generic;
using Entitas;
using Entitas.CodeGeneration.Attributes;
using UnityEngine;using UnityEngine.UI;

[Game] [Unique] public class CameraComponent : IComponent { public Camera Value;}
[Game] [Unique] public class PlayerComponent : IComponent { public CharacterController Value;}
[Game] public class GravityComponent  : IComponent{ public float Value; }
[Game] public class JumpForceComponent : IComponent { public float Value; }
[Game] public class MoveDirectionComponent : IComponent { public Vector3 Value; }
[Game] public class SensitivityComponent  : IComponent{ public float Value; }
[Game] public class SpeedComponent  : IComponent{ public float Value; }
 [Game] public class SmoothDampComponent : IComponent { public float Value; }

[Game] public class ChunksComponent : IComponent { public List<Chunk> Value; }

[Game ] public class VectorRangeComponent : IComponent { public Vector3Range Value; }

[Game] public  class ChunksLimitComponent : IComponent { public int Value; }

[Game] [Unique] public class FirstChunkComponent : IComponent { public Chunk Value; }

