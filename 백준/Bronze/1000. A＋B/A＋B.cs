using System;

namespace solved
{
    internal class Program
    {
        static void Main( string[ ] args )
        {
            string[] input = Console.ReadLine( ).Split( );
            Console.Write( int.Parse( input[0] ) + int.Parse( input[1] ) );
        }
    }
}