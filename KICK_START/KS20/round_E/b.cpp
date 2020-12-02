 
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int n, a, b, c; 
	cin >> n >> a >>  b >> c ;
	int T[n];
	

	for (int i = 0; i < (a-c); ++i)
	{
		T[i] = n-(a-c)+1+i;
	}

	for (int i = n-1; i > (n-1)-(b-c); --i)
	{
		T[i] = n-(b-c)+1 +(n-1-i) ;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << T[i] << " "; 
	}
	cout << "\n"; 



	
	// cout <<  << "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
		
	int t, i =1;
	cin >> t;
	while(t--)
	{	
		// cout << "Case #"<<i <<": ";
		solve();
		i++;
	}

	return 0;
}
