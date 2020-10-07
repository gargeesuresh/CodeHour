import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        int t = obj.nextInt();
        while(t-->0)
        {
            int n =obj.nextInt();
            int [] a = new int[n];
            for(int k=0;k<n;k++)
                a[k]=obj.nextInt();
            for(int i=0;i<n;i++)
            { for(int j=i;j<n;j++)
             {    for(int z=i;z<=j;z++)
             {
                   System.out.print(a[z]+" ");
             }
               System.out.println();     }
             
            }
        }
    
    }
}
