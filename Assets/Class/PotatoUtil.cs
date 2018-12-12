using System.Linq;

namespace UnityEngine
{
    public class PotatoUtil
    {
      
        public static string RandomString(int length)
        {
          
            const string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
            return new string(Enumerable.Repeat(chars, length)
                .Select(s => s[Random.Range(0,s.Length)]).ToArray());
        }
    }
}