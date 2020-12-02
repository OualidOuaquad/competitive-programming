
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int n, m, a[100001],ans = 0;
	set <int, greater <int> > s;

	cin >> n>>m;
	for (int i = 0; i < n; ++i)
	{
		cin>> a[i];
		s.insert(a[i]);
	}
	ans = n-s.size();



	
	cout << ans << "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	// #ifndef ONLINE_JUDGE
	// 	freopen("input.txt", "r", stdin);
	// 	freopen("output.txt", "w", stdout);
	// #endif


		
	int t;
	cin >> t;
	while(t--)
	{	
		solve();
	}

	return 0;
}
