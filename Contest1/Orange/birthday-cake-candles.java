import java.util.*;
public class Solution
{
    public static void main(String [] args)
    {    int max=Integer.MIN_VALUE;
        Scanner obj= new Scanner(System.in);
        int n = obj.nextInt();
        int  [] a = new int[n];
        for(int i=0;i<n;i++)
        {
            a[i]=obj.nextInt();
            if(a[i]>max)
                max=a[i];
        }
      int c=0;
     for(int i=0;i<n;i++)
         if(a[i]==max)
              c++;
     System.out.println(c);
    }
}
