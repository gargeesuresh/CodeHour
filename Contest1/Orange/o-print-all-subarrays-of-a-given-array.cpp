#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() { 
   int t,n;
   cin>>t;
   for(int T=0;T<t;T++)
   {
       cin>>n;
       vector <int> arr(n);
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       for(int i=0;i<n;i++)
       {
           for(int size=0;size<n;size++)
           {    int flag=0;
               for(int j=i;j<=size;j++)
               {cout<<arr[j]<<" "; flag =1;}
               if(flag) cout<<endl;
           }
       }cout<<endl;
   }
    return 0;
}
