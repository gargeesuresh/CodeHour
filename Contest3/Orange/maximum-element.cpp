#include<bits/stdc++.h>
using namespace std;

#define int                             long long
#define ff                              first
#define ss                                  second
#define bb                                begin()
#define ee                                end()
#define float                             double
#define pb                              push_back
#define mp                              make_pair
#define pii                             pair<int,int>
#define vi                              vector<int>
#define mii                                map<int,int>
#define setbits(x)                         __builtin_popcountll(x)
#define zrobits(x)                      __builtin_ctzll(x)
#define M                            1000000007
#define inf                             1e18
#define ps(x,y)                         fixed<<setprecision(y)<<x
#define    all(v)                            v.begin(),v.end()
#define w(e)                                int e; cin>>e; while(e--)
vector<vector<int>> graph(1000000);
vi visited(10000000, 0);

void im_mortal()
{

    stack<int>s;
    s.push(0);
    int n;
    cin >> n;
    while (n--)
    {

        //cout << "hello" << endl;
        int x;
        cin >> x;

        int k = 0;


        if (x == 1)
        {
            cin >> k;
            s.push(max(s.top(), k));
        }
        else if (x == 2)
            s.pop();
        else
        {
            cout << s.top() << endl;

        }

    }
}

signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    im_mortal();
    return 0;
}
