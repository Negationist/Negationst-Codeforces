#include <bits/stdc++.h>

using namespace std;

void solve(){
    string str;
    cin >> str;
    if (str.size()<=10){
        cout << str << endl;
    } else{
        cout << str[0] << str.size()-2 << str[str.size()-1] << endl;
    }
}


int main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
