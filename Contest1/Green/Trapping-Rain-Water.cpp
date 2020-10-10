#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> a(n);
	    for(int i = 0; i < n; i++)cin >> a[i];
	    vector<int> left(n), right(n);
	    left[0] = a[0];
	    right[n - 1] = a[n - 1];
	    for(int i = 1; i < n; i++)
	        left[i] = max(left[i - 1], a[i]);
	    for(int i = n - 2; i >= 0; i--)
	        right[i] = max(right[i + 1], a[i]);
	   
	    int ans = 0;
	    for(int i = 0; i < n; i++)ans += min(left[i], right[i]) - a[i];
	    cout << ans << '\n';
	}
	return 0;
}
