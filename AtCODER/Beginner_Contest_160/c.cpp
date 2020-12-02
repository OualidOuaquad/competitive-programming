
	#include <bits/stdc++.h>
	using namespace std;

	#define ll long long
	#define ar array




	int main() {

		ios::sync_with_stdio(0);
		cin.tie(0);

		int k, n ; cin >> k >> n ;
		int a[n];
		for(int i=0; i<n ; ++i)
		{
			cin >>	a[i];
		}




		int maxdif = k - max(a[n-1],a[n-2]);


		for(int i=0; i<n-1; i++)
		{
			maxdif = max( a[i+1]-a[i] , maxdif);	
		}
		cout << k-maxdif;
		





		return 0;
	}
