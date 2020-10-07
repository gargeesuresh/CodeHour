#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void solve(){
    int n,m;
    cin>>n;
    cin>>m;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int s=0;
         for(int j=0;j<n;j++){
             
              for(int k=0;k<n;k++){
                  if(i!=j&&i!=k&&j!=k){
                      
                      s=a[i]+a[j]+a[k];
                      if(s==m){
                          cout<<1<<endl;
                          return;
                            }
                  }
              }
         }
        
    }
    cout<<0<<endl;
    return;
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

