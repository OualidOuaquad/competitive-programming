
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
void solve(){
    int n; cin >> n; 
    int R[n];
    for(int i=0; i<n; ++i){
        cin >> R[i] ; 
    }
    sort(R, R+n);

    vector<int> div ; 

    int m=1e9;
    int ok = 0;
    int errors=0;

    for(int i=2; i<=R[0]; i++){
        if(R[0]%i==0)
            div.push_back(i);
    }

    for(auto d:div){
        ok = 0;
        for(int j=0; j<n; ++j){
            if(R[j]%d == 0){
                m = min(d, m);
                ok++;
            }
        }
        if(ok != n){
            errors++;
        }
    }

    if(errors == div.size())
        cout << -1 << '\n';
    else 
        cout << m << '\n';
}

int main(){
    
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t; 
    cin >> t ;
    while(t--)
        solve();
}

