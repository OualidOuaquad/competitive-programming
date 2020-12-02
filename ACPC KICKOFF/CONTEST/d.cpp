
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int n, a[100001],ans=0,s=0;
	
	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		s+=a[i];
	}
	sort(a, a+n, greater<int>()); 
	ans = n*a[0] - s;



	
	cout <<  ans << "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif


		
	int t;
	cin >> t;
	while(t--)
	{	
		solve();
	}

	return 0;
}
