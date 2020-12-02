
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){

    int n , k; cin >> n >>k ;
    int ans ;
    if(n==1)
        ans = 0;
    else
        ans = ((k==1 || k==n)? 1:2) ;

    cout << ans<< "\n";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("tabs.in", "r", stdin);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
