
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int n , ans = 0; 
	cin >> n ;
	int p=n%10, m =  int(log10(n)+1) ;

	ans = 10*(p-1) + m*(m+1)/2;

	
	cout << ans << "\n";
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
