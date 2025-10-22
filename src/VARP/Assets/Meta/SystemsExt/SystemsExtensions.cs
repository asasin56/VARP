using System.Collections.Generic;
using Entitas;
using Meta.SystemsExt;

namespace Meta
{
    public static class SystemsExtensions
    {
        private static readonly List<IFixedExecuteSystem> FixedExecuteSystems = new List<IFixedExecuteSystem>();
        private static readonly List<ILateExecuteSystem> LateExecuteSystems = new List<ILateExecuteSystem>();
        private static readonly List<IOnDestroySystem> OnDestroySystems = new List<IOnDestroySystem>();
        
        public static void Add(this Systems systems, IFixedExecuteSystem system)
        {
            FixedExecuteSystems.Add(system);
        }

        public static void Add(this Systems systems, IOnDestroySystem system)
        {
            OnDestroySystems.Add(system);
        }

        
        public static void Add(this Systems systems, ILateExecuteSystem system)
        {
            LateExecuteSystems.Add(system);
        }

        public static void FixedExecute(this Systems systems)
        {
            foreach (var fixedExecuteSystem in FixedExecuteSystems)
            {
                fixedExecuteSystem.FixedExecute();
            }
        }
        public static void LateExecute(this Systems systems)
        {
            foreach (var lateExecuteSystem in LateExecuteSystems)
            {
                lateExecuteSystem.LateExecute();
            }
        }
        public static void OnDestroy(this Systems systems)
        {
            foreach (var onDestroySystem in OnDestroySystems)
            {
                onDestroySystem.OnDestroy();
            }
        }
    }
}