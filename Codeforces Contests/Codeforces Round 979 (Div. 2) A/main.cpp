#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pair<int,int>>

using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    int mn = LLONG_MAX, mx = -1;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mx = max(mx,a[i]);
        mn = min(mn,a[i]);
    }
    int ans = (mx-mn)* (n-1);
    cout << ans << "\n";
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
