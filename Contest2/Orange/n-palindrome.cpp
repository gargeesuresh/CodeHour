#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
int main() { int n; cin>>n; int rev=0; int r=0; int flag =0; int temp=n;
            
                while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10;
    }  if (temp!=rev)  cout<<"No"; 
            else  
                for(int i=2; i*i<temp; i++)
                {
                    if (temp % i == 0) {
             flag = 1;
            break;
                }
                }
        if (flag==0) cout<<"Yes";
        else cout<<"No"; 
            
            
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
