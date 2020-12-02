
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int n,m;
	cin >>n >> m;
	int a[1000001],b[1000001],inter[1000001];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}
	
	int f = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			if (a[i] ==  b[j])
			{
				inter[f] = a[i];
				f++;
				cout<<a[i]<<" ";
				break;
			}
		}
	}



	
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif


		
	// int t;
	// cin >> t;
	// while(t--)
	// {	
	// 	solve();
	// }
	solve();
	return 0;
}
