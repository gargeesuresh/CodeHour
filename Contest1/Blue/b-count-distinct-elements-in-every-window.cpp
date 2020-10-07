#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<map>
using namespace std;

    void countDistinct(vector <int> arr, int k, int n) 
{ 
    
    map<int, int> hm; 
 
    int dist_count = 0; 

    for (int i = 0; i < k; i++) { 
        if (hm[arr[i]] == 0) { 
            dist_count++; 
        } 
        hm[arr[i]] += 1; 
    } 
    cout<<dist_count<<" ";
  
  
    for (int i = k; i < n; i++) { 
        
        if (hm[arr[i - k]] == 1) { 
            dist_count--; 
        } 
       
        hm[arr[i - k]] -= 1; 
  
       
        if (hm[arr[i]] == 0) { 
            dist_count++; 
        } 
        hm[arr[i]] += 1; 
  if(i==n-1){cout<<dist_count<<endl;}
        else{cout<<dist_count<<" ";}
      
    } 
} 


  
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
    countDistinct(arr, k, n);        
    }
    

  
    return 0; 
} 


