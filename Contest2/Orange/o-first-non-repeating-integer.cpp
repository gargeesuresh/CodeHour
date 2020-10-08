#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
int main() {int t; cin>>t; 
            while(t--)
            { 
                int n; cin>>n; int arr[n];
             for(int i=0;i<n;i++)
             {
                 cin>>arr[i];
             }
    for (int i = 0; i < n; i++) { 
        int j; 
        for (j = 0; j < n; j++) 
            if (i != j && arr[i] == arr[j]) 
                break; 
        if (j == n) 
            cout<<arr[i]<<endl; 
    } 
     
} 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
