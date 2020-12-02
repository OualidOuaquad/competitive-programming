
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int N, H[100], ans =0 ;
	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> H[i];
	}

	for (int i = 1; i < N-1; ++i)
	{
		if (H[i]>H[i-1] && H[i]>H[i+1])
		{
			ans ++;
		}
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
