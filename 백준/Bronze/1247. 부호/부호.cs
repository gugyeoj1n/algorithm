using System;
using System.Numerics;

namespace solved
{
    internal class Program
    {
        static void Main( string[ ] args )
        {
            int n;
            long l;
            BigInteger b, x;
            
            for(int i = 0; i < 3; i++)
            {
                x = 0;
                n = int.Parse( Console.ReadLine( ) );
                for(int j = 0; j < n; j++)
                {
                    l = long.Parse( Console.ReadLine( ) );
                    b = l;
                    x += b;
                }
                Console.WriteLine( x > 0 ? "+" : x < 0 ? "-" : "0" );
            }
        }
    }
}