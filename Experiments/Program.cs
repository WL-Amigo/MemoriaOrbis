using System;
using Experiments.Serialization;

namespace Experiments
{
    class MainClass
    {
        public static void Main(string[] args)
        {
            SerializeJson.Execute();
            SerializeMsgPack.Execute();
        }
    }
}
