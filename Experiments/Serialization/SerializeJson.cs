using System;
using Newtonsoft.Json;

namespace Experiments.Serialization
{
    public class SerializeJson
    {
        static public void Execute(){
            var data = SerializeTestData.GetListTestData();
            var json = JsonConvert.SerializeObject(data);
            Console.WriteLine(json);
        }
    }
}
