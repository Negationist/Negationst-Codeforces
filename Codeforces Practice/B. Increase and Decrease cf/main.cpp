#include <bits/stdc++.h>

#define FOR(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long sum =0;
    for (int i=0;i<n;i++){
        int a;
        cin >> a;
        sum += a;
    }
    if (sum%n==0){
        cout << n;
    } else {
        cout << n-1;
    }

    return 0;
}
