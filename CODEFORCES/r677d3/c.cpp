
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int n ,ans=-1, p=0;
	cin >> n;
	int a[n]; 
	set<int> s;
	for (int i = 0; i < n; ++i)
	{
		cin>> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if(a[i]>p){
			p = a[i];
			ans = i;
		}
		s.insert(a[i]);
	}

	if(s.size()==1)
		cout<<-1<<"\n";
	else
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
