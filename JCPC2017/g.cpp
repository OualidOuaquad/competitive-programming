
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
    int n,v;    cin >> n >> v ;
    int a[n];
    for(int i=0; i<n; ++i){
        cin>> a[i];
    }

    int ans = 0, l=0;
    for(int r=0; r<n ;r++){
        int cor = 0;
        do{
            for(int i=l; i<=r; ++i)
                cor |= a[i];d

        }while(l++<=r && cor > v);

        ans = max(ans, r-l+1);
    }

    cout<< ans <<'\n';
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}
