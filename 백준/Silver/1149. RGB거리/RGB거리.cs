using System;

namespace solved
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse( Console.ReadLine( ) );
            int[,] arr = new int[1001, 4];
            int[,] dp = new int[1001, 4];
            for(int i = 0; i < n; i++)
            {
                string[] token = Console.ReadLine( ).Split( );
                for(int j = 0; j < 3; j++)
                    arr[i, j] = int.Parse( token[j] );
            }
            dp[0, 0] = arr[0, 0];
            dp[0, 1] = arr[0, 1];
            dp[0, 2] = arr[0, 2];
            for(int i = 1; i <= n; i++)
            {
                dp[i, 0] = Math.Min( dp[i - 1, 1], dp[i - 1, 2] ) + arr[i, 0];
                dp[i, 1] = Math.Min( dp[i - 1, 0], dp[i - 1, 2] ) + arr[i, 1];
                dp[i, 2] = Math.Min( dp[i - 1, 0], dp[i - 1, 1] ) + arr[i, 2];
            }    

            Console.Write( Math.Min( Math.Min( dp[n - 1, 0], dp[n - 1, 1] ), Math.Min( dp[n - 1, 0], dp[n - 1, 2] ) ) );
        }
    }
}