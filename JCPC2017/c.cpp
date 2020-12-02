
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
    int n; cin >> n;
    string s, ans ; cin >> s;
    vector<int> v(13);
    for(int i=0; i<13; ++i){
        cin >> v[i];
    }

    for(int c:s){
        v[c-'A']=-2;
    }

    int m=-1;
    int idx=0;

    for(int i=0; i<13; ++i){
        if(m<v[i]){
            m =  v[i];
            idx = i;
        }
    }
    ans = (char)(idx + 'A');
    cout << ans << "\n";

}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    freopen("scoreboard.in", "r", stdin);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }

    return 0;
}

