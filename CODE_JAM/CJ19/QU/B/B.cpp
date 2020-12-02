

#include <bits/stdc++.h>
#include <string> 

using namespace std;

#define ll long long
#define ar array


void solve(){

	string s , ans;
	int N;
	cin >> N;
	cin >> s;
	
	for (int i = 0 ; i < 2*N-2; ++i)
	{
		ans.push_back( (s[i]=='E')? 'S':'E' );
	}
	
	cout << ans << endl;

	
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	// #ifndef ONLINE_JUDGE
	// 	freopen("in.txt", "r", stdin);
	// 	freopen("out.txt", "w", stdout);
	// #endif


	int t, i=1;
	cin >> t;
	while(t--)
	{	
		cout << "Case #"<<i<<": ";
		solve();
		i++;
	}

	return 0;
}
