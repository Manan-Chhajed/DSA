/* Manan Chhajed */

#include <bits/stdc++.h>
// Policy based data structures
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

using namespace std;
// using namespace __gnu_pbds;

// Macros
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr << endl;
#define deb(x) cerr << #x << "=";
#else
#define debug(x)
#define deb(x);
#endif

#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define F first
#define S second
#define set_bits __builtin_popcountll
// __builtin_ffsll(x) returns 1 + least significant 1-bit of x

#define py cout << "YES\n";
#define pn cout << "NO\n";
#define pm cout << "-1\n";
#define fast_io() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define int long long

// Aliases
using ll = long long;
using ull = unsigned long long;
using ld = long double;
// template <typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Constants
constexpr ll INF = 2e18;
constexpr ld EPS = 1e-9;
constexpr ll MOD1 = 998244353; // 1e9+7;

void init_code() {
    fast_io();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

// void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.F); cerr << ","; _print(p.S); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int f(int i, int n, string s)
{
    if (i == 0) return 1;

    if (s[i] == s[i - 1]) return f(i - 1, n, s);

    return i + 1;
}

void solve()
{
    int i, j, k, n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> ans(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        ans[i] = f(i, n, s);
    }

    // for (int i = 1; i < n - 1; i++)
    // {
    //     if (s[i] == s[i - 1])
    //         ans[i] = ans[i - 1];

    //     else
    //         ans[i] = i + 2 - 1;
    // }

    for (auto it : ans)
        cout << it << " ";

    cout << endl;
}


int32_t main()
{
    init_code();

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}