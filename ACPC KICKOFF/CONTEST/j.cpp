
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){

	int k, n; 
	cin >> k>>n;

	int a = k/n;
	int b = k%n;


	
	cout << a <<" " << b << "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("chief.in", "r", stdin);
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
