
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int a,b; cin >> a >> b;
	int ans;
	if(a%b == 0){
		ans = 0;
	} 
	else{
		ans = b -  a%b;
	}

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
