

#include <bits/stdc++.h>
#include <climits>



using namespace std;

#define ll long long
#define ar array


// int knapSack(int v[], int w[], int n, int W) {
//    if (W < 0)
//       return INT_MIN;
//    if (n < 0 || W == 0)
//       return 0;
//    int in = v[n] + knapSack(v, w, n - 1, W - w[n]);
//    int ex = knapSack(v, w, n - 1, W);
//    return max (in, ex);
// }



void solve(){
	int n,u[(int)1e5],v[(int)1e5],s[(int)1e5],c[(int)1e5], y=0 , z=0;
	cin >> n;
	for (int i = 0; i < n-1; ++i)
	{
		cin >> u[i] >> v[i] >> s[i] >> c[i];
	}

	cout << y <<" "<< z << endl;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("in.txt", "r", stdin);
		freopen("out.txt", "w", stdout);
	#endif

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
