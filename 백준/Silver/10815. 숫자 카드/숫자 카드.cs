using System;
using System.Text;

namespace solved
{
    internal class Program
    {
        static bool binarySearch( int[] arr, int target )
        {
            int left = 0, right = arr.Length - 1;
            while(left <= right)
            {
                int mid = ( left + right ) / 2;
                if(arr[mid] == target) return true;
                if(arr[mid] < target) left = mid + 1;
                else right = mid - 1;
            }

            return false;
        }
        
        static void Main( string[ ] args )
        {
            StreamReader sr = new StreamReader(Console.OpenStandardInput());
            StreamWriter sw = new StreamWriter(Console.OpenStandardOutput());
            StringBuilder sb = new StringBuilder( );
            int n = int.Parse( sr.ReadLine( ) );
            int[] nums = Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);
            Array.Sort( nums );
            int m = int.Parse( sr.ReadLine( ) );
            int[] targets =  Array.ConvertAll(sr.ReadLine().Split(' '), int.Parse);

            foreach(int target in targets)
                sb.Append( binarySearch( nums, target ) ? "1 " : "0 ");
            
            sw.Write( sb );
            sw.Flush( );
            sr.Close(  );
            sw.Close(  );
        }
    }
}