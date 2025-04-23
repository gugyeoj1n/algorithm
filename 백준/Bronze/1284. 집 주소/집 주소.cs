using System;
using System.Numerics;

namespace solved
{
    internal class Program
    {
        static void Main( string[ ] args )
        {
            int result;
            while( true )
            {
                result = 2;
                string n = Console.ReadLine( );
                if(n == "0")
                    break;
                
                for(int i = 0; i < n.Length; i++)
                {
                    char x = n[i];
                    if(x == '1') result += 2;
                    else if(x == '0') result += 4;
                    else result += 3;
                }
                result += n.Length - 1;
                Console.WriteLine( result );
            }
        }
    }
}