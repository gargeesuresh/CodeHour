import java.io.*;
import java.util.*;

class Solution {
  public static int findMinSubArray(int S, int[] arr) {
    int windowSum = 0, minLength = Integer.MAX_VALUE;
    int windowStart = 0;
    for (int windowEnd = 0; windowEnd < arr.length; windowEnd++) {
      windowSum += arr[windowEnd];
      while (windowSum >= S) {
        minLength = Math.min(minLength, windowEnd - windowStart + 1);
        windowSum -= arr[windowStart]; 
        windowStart++; 
      }
    }

    return minLength == Integer.MAX_VALUE ? 0 : minLength;
  }

  public static void main(String[] args) {
      
      
      Scanner obj = new Scanner( System.in);
        int t =obj.nextInt();
        while(t-->0)
        {
            int n = obj.nextInt();
            int k =obj.nextInt();
            int [] a = new int [n];
            for(int i=0;i<n;i++)
                a[i]=obj.nextInt();
            System.out.println(findMinSubArray(k,a));
            
        }
          
  }
  }
