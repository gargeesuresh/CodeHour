import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        boolean flag=false;
        int t =obj.nextInt();
        while(t-->0)
        {
            int n = obj.nextInt();
            int l = obj.nextInt();
            int [] a =new int[n];
            for(int i=0;i<n;i++)
                a[i]=obj.nextInt();
            for(int j=0;j<n-1;j++)
            {
                for(int k=j+1;k<n;k++)
                    if(a[j]+a[k]==l)
                        flag=true;
            }
            if(flag)
             System.out.println("Yes");
        else
             System.out.println("No");
        }
        
    }
}
