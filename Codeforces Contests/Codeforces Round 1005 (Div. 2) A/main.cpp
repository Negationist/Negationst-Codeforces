#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define ff first
#define ss second
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pair<int,int>>

using namespace std;
using ll = long long;
void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            ++ans;
        }
    }
    ++ans;
    cout << max(ans-=(s[0]=='0'),0LL) << "\n";
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
