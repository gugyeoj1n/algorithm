using System;

namespace solved
{
    internal class Program
    {
        static void Main( string[ ] args )
        {
            int[] arr = new int[9];
            int sum = 0;
            bool tmp = false;
            for(int i = 0; i < 9; i++)
            {
                arr[i] = int.Parse( Console.ReadLine( ) );
                sum += arr[i];
            }

            for(int i = 0; i < 8; i++)
            {
                for(int j = 1; j < 9; j++)
                {
                    if(sum - arr[i] - arr[j] == 100)
                    {
                        arr[i] = -1;
                        arr[j] = -1;
                        tmp = true;
                        break;
                    }
                }

                if(tmp)
                    break;
            }
            
            Array.Sort( arr );
            for(int i = 2; i < 9; i++)
                Console.WriteLine( arr[i] );
        }
    }
}