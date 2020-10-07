import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner obj = new Scanner(System.in);
        int n = obj.nextInt();
        int k = obj.nextInt();
         int digits;
        while(k-->0)
        {
            digits=(int)Math.floor(Math.log10(n))+1;
            if(digits==1||n%10!=0)
                n--;
            else
                n=n/10;
        }
        System.out.println(n);
    }
}
