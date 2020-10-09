#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int ans = 0;
        for(int size = 1; size <= (int)s.size(); size++){
            set<char> st;
            for(int i = 0; i < size; i++)st.insert(s[i]);
            if((int)st.size() == size)ans = max(ans, size);
            for(int i = size; i < (int)s.size(); i++){
                st.erase(s[i - size]);
                st.insert(s[i]);
                if((int)st.size() == size)ans = max(ans, size);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
