
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int a,b, ans = 0;
	cin >>a>>b ;
	for (int i = a; i <= b; ++i)
	{
		if (i%4==0 and i%100!=0)
		{
			ans++;
		}
		else if(i%400==0){
			ans++;
		}
	}
	
	cout << ans << "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("stars.in", "r", stdin);
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
