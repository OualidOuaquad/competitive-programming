
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int x; 
	cin >> x;
	int ans = 0;

	ans = (x/500)*1000 + ((x%500)/5)*5;


	cout << ans ;

	return 0;
}
