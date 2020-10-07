#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
            char c;
            cin>>c;
            int x,y;
    
           x = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    
            y = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

   
    if (x || y)
        cout <<"Vowel";
    else
        cout <<"Not a vowel";
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
