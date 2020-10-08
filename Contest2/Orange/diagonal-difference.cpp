#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int main()
{ int n; cin>>n; int a[n][n]; 
    for(int i=0; i<n ;i++)
    {
        for(int j=0; j<n;j++)
        {
            cin>>a[i][j]; 
        }
    } int count =0; int count1=0; 
        for(int i=0; i<n ;i++)
    {
        for(int j=0; j<n;j++)
        {
                    if(i==j) count=count+a[i][j]; 
              if ((i+j)==n-1) count1=count1+a[i][j]; 
 
        }  
    } 
 if(count1>count) cout<<count1-count; 
 else cout<<count-count1;
    return 0;
}
 
