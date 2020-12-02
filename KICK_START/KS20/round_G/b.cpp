
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
    int n ; cin>>n;
    int c[n];
    map<pair<int, int>, int> mp;

    for(int i=0; i<n; ++i){
        for(int j=0; j<n; ++j){
            cin>> c[i][j];
        }
    }
    
    int ans = 0;
    for(int i=0; i<n; ++i){
        for(int j=0; j < n; ++j){
            if(i==1){
                for(int k=0; k<n-i; ++k){
                    mp[make_pair(i, j)]+=c[i][j];
                }
            }
        }   

    }
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t, i=1; 
    cin >> t;
    while(t--){ç
        cout << "Case #" << i << ": ";
        solve();
        ++i;   ç
    }    
return 0;
}


