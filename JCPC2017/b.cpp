#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(){

    int n ; cin >> n;
    int T[n];
    int ans=0;
    for(int i =0; i<n ;++i)
        cin >> T[i];
    sort(T, T+n, greater<int>());

    for(int i=5; i<n; ++i){
        if(T[i]-T[i-5]<=1000){
            ans++;
            i+=5;
        }

    }

    cout << ans << "\n";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("overcode.in", "r", stdin);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
