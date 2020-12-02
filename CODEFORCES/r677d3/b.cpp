
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int n, ans =0 ;
	cin >> n;
	int a[n];
	int ones = 0, p1=0,p2=0;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		if(a[i])
		{
			if (ones==0)
				p1 = i;  
			ones++;
			p2 = max(i,p2);
		}
	}

	if(ones == 1)
		cout << 0 << "\n";

	else
	{
		for (int i = p1; i < p2+1; ++i)
		{
			if(!a[i])
				ans++;
		}
		cout << ans << "\n";
	}
	
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);


		
	int t;
	cin >> t;
	while(t--)
	{	
		solve();
	}

	return 0;
}
