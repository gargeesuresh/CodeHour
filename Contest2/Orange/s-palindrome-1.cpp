#include <cmath>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string> 
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
 
 
int main() { int t; cin>>t;  int x=0;
           while(t--)
            {   string a, b; int flag=0; 
            cin>>a; b=a; 
        int i; int n = a.length();
                for( i = 0; i < n; i++)
               {
                    b[n-1-i] = a[i];
                        }
 
if (a==b)  x=x+n; 
                else flag++; 
       
            } cout<<x;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
