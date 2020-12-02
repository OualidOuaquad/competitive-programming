
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int M = 1000000007;

void solve(){
	int n;

	cin >> n ;
	int m = (n+1)%M;
	int mm = m*m % M;
	int ans = (m*(mm-1))%M  ;

	cout << ans<< "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("box.in", "r", stdin);
		// freopen("in.txt", "r", stdin);
		// freopen("out.txt", "w", stdout);
	#endif


		
	int t;
	cin >> t;
	while(t--)
	{	
		solve();
	}

	return 0;
}
	