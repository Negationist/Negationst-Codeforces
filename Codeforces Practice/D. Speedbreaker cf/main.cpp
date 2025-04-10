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
    int a[n+1],mx[n+1],mn[n+1];
    for(int i=0;i<=n;i++){
        mn[i] = n+1;
        mx[i] = 0;
    }
    for(int i=1;i<=n;i++){
        cin >> a[i];
        mn[a[i]] = min(mn[a[i]], i);
        mx[a[i]] = max(mx[a[i]], i);
    }
    for(int i=1;i<=n;i++){
        mn[i] = min(mn[i],mn[i-1]);
        mx[i] = max(mx[i],mx[i-1]);
        if(mx[i]-mn[i]>=i){
            cout << "0\n";
            return;
        }
    }
    int l=1,r=n;
    for(int i=1;i<=n;i++){
        l = max(l,i-(a[i]-1));
        r = min(r,i+(a[i]-1));
    }
    cout << r-l+1 << endl;
}

signed main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
