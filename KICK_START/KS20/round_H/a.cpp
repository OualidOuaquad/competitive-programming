#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
    int N, K, S; 
    cin >> N >> K >> S; 
    int ans =0 ;

    ans = min((K-S)+ N-S , N) + K;
    cout << ans << '\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t, i=1;
    cin >> t;

    while(t--){
        cout << "Case #" << i << ": ";
        solve();
        ++i;
    }    
return 0;
}


