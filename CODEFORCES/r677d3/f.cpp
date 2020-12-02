
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array



int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, k, ans = -1e9, ansl = ans, msfl = ans, msf = ans;
	cin >> n >> m >> k ;
	int a[n][m];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m/2+1	; ++j)
		{
			for (int l = j; l < m/2+j; ++l)
			{
				msfl  = max(msfl+a[i][l], a[i][l]);
				if(msfl%k == 0)
					ansl = max(msfl, ansl);
			}
		}
		ans =  max(ans, ansl);
		ansl = -1e9;
		msfl = -1e9;

	}
	
	cout << ans << "\n";
	return 0;
}
