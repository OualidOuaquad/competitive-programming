
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int N, X[1000]  ;
	ll D;
	cin >> N >> D;

	ll ans = D;

	for (int i = 0; i < N; ++i)
	{
		cin >> X[i];
	}

	// sort(X,X+N);

	for (int i = 0; i < N; ++i)
	{
		ans-=  D % X[i]; 
	}
	
	cout <<  ans << "\n";
}

int main() {
		
	ios::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif


		
	int t, i=1 ;
	cin >> t;
	while(t--)
	{	
		cout << "Case #"<< i <<": ";
		solve();
		i++;
	}

	return 0;
}
