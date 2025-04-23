using System;

namespace solved
{
    internal class Program
    {
        static char[][] graph;

        static void dfs( int x, int y )
        {
            if(graph[x][y] == '-')
            {
                graph[x][y] = '1';
                foreach(int dy in new int[] { 1, -1 })
                {
                    int newY = y + dy;
                    if(newY > 0 && newY < graph[0].Length && graph[x][newY] == '-')
                        dfs( x, newY );
                }
            }

            if(graph[x][y] == '|')
            {
                graph[x][y] = '1';
                foreach(int dx in new int[] { 1, -1 })
                {
                    int newX = x + dx;
                    if(newX > 0 && newX < graph.Length && graph[newX][y] == '|')
                        dfs( newX, y );
                }
            }
        }
        
        static void Main( string[ ] args )
        {
            string[] input = Console.ReadLine( ).Split( );
            int n = int.Parse( input[0] ), m = int.Parse( input[1] ), x = 0;

            graph = new char[n][];
            for(int i = 0; i < n; i++)
                graph[i] = Console.ReadLine( ).ToCharArray( );

            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                {
                    if(graph[i][j] == '-' || graph[i][j] == '|')
                    {
                        dfs( i, j );
                        x++;
                    }
                }
            }
            
            Console.WriteLine(x);
        }
    }
}