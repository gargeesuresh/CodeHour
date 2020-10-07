#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    //code
    int t;
    cin>>t;
    while(t-- > 0){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int even = 0;
        int odd = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i] % 2==0){
                swap(arr[even],arr[i]);
                even++;
            }
        }
        sort(arr.begin(),arr.begin()+even);
       // cout<<even+1<<endl;
        sort(arr.begin()+even,arr.end());
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
