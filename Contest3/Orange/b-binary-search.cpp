#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
int binary(vector<int> v , int n , int x)
{
    int l = 0;
    int r = n-1;
    int mid = 0;
    while(l<=r)
    {
        mid = l+(r-l)/2;
        if(v[mid] == x)
            return mid;
        else if(v[mid] < x)
             l = mid+1;
        else
           r = mid-1;
    }
    return -1;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<int> v;

        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        cout<<binary(v,n,m)<<endl;
        
    }
}
