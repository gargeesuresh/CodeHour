#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
int main() { int t; cin>>t; 
    while(t--)
{ 
    int x; int n; cin>>n>>x; int a[n]; int f=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1; j<n; j++)
            {
                
                    if (a[i]+a[j]==x) f++;
                
            }
        }
        if (f>=1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
    }  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
