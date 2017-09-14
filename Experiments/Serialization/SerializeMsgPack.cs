using System;
using MessagePack;

namespace Experiments.Serialization
{
    public class SerializeMsgPack
    {
        public static void Execute(){
            var data = SerializeTestData.GetListTestData();
            var msgpack = MessagePackSerializer.Serialize(data);
            Console.WriteLine(MessagePackSerializer.ToJson(msgpack));
        }
    }
}
