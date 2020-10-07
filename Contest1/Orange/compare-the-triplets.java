import java.util.*;
public class Solution
{
    public static void main(String []  args)
    {
        Scanner obj = new Scanner(System.in);
          int [] a =new int[3];
         int [] b =new int[3];
        int alice=0,bob=0;
        for(int i=0;i<3;i++)
            a[i]=obj.nextInt();
         for(int i=0;i<3;i++)
            b[i]=obj.nextInt();
        for(int i=0;i<3;i++)
        {
            if(a[i]>b[i])
                alice++;
            if(a[i]<b[i])
                bob++;
        }
        System.out.println(alice+" "+bob);
    }
}

