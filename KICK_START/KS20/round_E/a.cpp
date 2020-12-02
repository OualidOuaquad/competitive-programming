
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int n, ans = 2 ; cin >> n;
	int a[n];


	for (int i = 0; i < n; ++i)
	{
		cin >> a[i]; 
	}

	int dif = a[1]-a[0];
	int m = 2;


	for(int i = 1 ; i<n-1 ; i++)
	{
		int d = a[i+1] - a[i];
		if(d == dif ){
			ans++;
			m = max(m, ans);
			
		}
		else{
			dif = d;
			ans = 2;
		}

	}
	

 
	
	cout << m << "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);



		
	int t, i=1 ;
	cin >> t;
	while(t--)
	{	
		cout << "Case #" << i <<": ";
		solve();
		i++;
	}

	return 0;
}
