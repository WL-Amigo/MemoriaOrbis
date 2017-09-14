using System.Collections.Generic;

namespace Experiments.Serialization
{
    public class SerializeTestData
    {
        public static Dictionary<string, object> GetTestData()
        {
            return new Dictionary<string, object>{
                { "string", "This is a string" },
                { "int", 512 },
                { "double", 3.1415 },
                { "boolean", true },
                { "nestedDictionary", new Dictionary<string, object>{
                        { "member1", 1 },
                        { "member2", 2 }
                        }
                }
            };
        }

        public static List<Dictionary<string, object>> GetListTestData()
        {
            return new List<Dictionary<string, object>>
            {
                { new Dictionary<string, object> {
                    { "string", "This is a string" },
                    { "int", 512 },
                    { "double", 3.1415 },
                    { "boolean", true },
                    { "nestedDictionary", new Dictionary<string, object>{
                        { "member1", 1 },
                        { "member2", 2 }
                        }
                    }
                }},
                { new Dictionary<string, object> {
                    { "data2", 3 },
                    { "data2str", "this is second element" }
                }}
            };
        }
    }
}
