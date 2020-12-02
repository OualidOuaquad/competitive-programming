
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

		
	int x, y, a, b, c;
	cin >> x >> y >> a >> b >> c;
	int pa[a], pb[b], pc[c];
	for (int i = 0; i < a; ++i)
	{
		cin>>pa[i];
	}
	for (int i = 0; i < b; ++i)
	{
		cin>>pb[i];
	}
	for (int i = 0; i < c; ++i)
	{
		cin>>pc[i];
	}


	sort(pa,pa +a, greater<int>());
	sort(pb,pb +b, greater<int>());
	sort(pc,pc +c, greater<int>());

	int ans = 0;
	for (int i = 0; i < x; ++i)
	{
		ans+=pa[i]
	}
	for (int i = 0; i < y; ++i)
	{
		ans+=pb[i];
	}

	return 0;
}
