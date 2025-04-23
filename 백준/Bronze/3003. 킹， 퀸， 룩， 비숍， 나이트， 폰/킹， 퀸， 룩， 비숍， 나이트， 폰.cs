using System;

namespace solved
{
    internal class Program
    {
        static void Main( string[ ] args )
        {
            string[] input = Console.ReadLine( ).Split( );
            int[] arr = { 1, 1, 2, 2, 2, 8 };

            for(int i = 0; i < input.Length; i++)
                arr[i] -= int.Parse( input[i] );
            
            foreach(int a in arr)
                Console.Write( a + " " );
        }
    }
}