
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int n,k,ans;
	int a[100001];
	ans = 1;
	cin >> n>>k;
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

    sort(a, a+n, greater<int>()); 

	for (int i = 0; i < k; ++i)
	{
		ans= ans * a[i];
	}
	
	cout << ans << "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("mult.in", "r", stdin);
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
