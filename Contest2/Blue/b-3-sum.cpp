#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void sumcheck(vector<int> a,int n,int x){
    sort(a.begin(),a.end());
 for(int i=0;i<n-2;i++){
            int j=i+1;
            int k=n-1;
        while(j<k){
            if(a[i]+a[j]+a[k]==x){cout<<1<<endl;return;}
            else if (a[i]+a[j]+a[k]>x){k--;}                                     
            else{j++;}
                 }  
        } cout<<0<<endl;return;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for (int i=0;i<n;i++){
            cin>>a[i];
        }
        sumcheck(a,n,x);
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

