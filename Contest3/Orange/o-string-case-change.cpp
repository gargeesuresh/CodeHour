#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        
        int n = s.size();
        
        if(s[0] < 97)
        {
            for(int i = 0;i<n;i++)
            {
                if(s[i] >97)
                {
                    s[i] = s[i] - 32 ;
                }
            }
        }
        else
        {
           for(int i = 0;i<n;i++)
            {
                if(s[i] < 97)
                {
                    s[i] = s[i] + 32 ;
                }
            } 
        }
        cout<<s<<endl;
    }
    return 0;
}
