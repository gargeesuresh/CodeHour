#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
            int t,a,b;
            cin>>t;
                
            for(int i=0;i<t;i++)
            {
                cin>>a>>b;
                a=a+b;
                b=a-b;
                a=a-b;
                cout<<a<<" "<<b<<endl;
            }
            
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

