
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int N, P, S[10000], cumS[10000] ,ans=0;
	cin >> N >> P;

	for (int i = 0; i < N; ++i)
	{
		cin >> S[i];
	}

	sort(S, S+N);
	cumS[0] = S[0];

	for (int i = 1; i < N; ++i)
	{
		cumS[i]=cumS[i-1]+S[i];
	}

	int min,i;
	if(N>P)
	{
		min =(P-1)*S[N-1] - cumS[N-2] - cumS[(N-1)-(P)] ;
		i = N-2;

		while (i>=P-1 and min > 0) {

			ans = (P-1)*S[i] - cumS[i-1] - cumS[i-(P)];

			if (min >= ans){
				min = ans;
			}
			i--;
		}	
	}
	
	else {
		ans =(P-1)*S[N-1] - cumS[N-2]  ;
	}

	

	cout << ans << "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
//
//	 #ifndef ONLINE_JUDGE
//	 	freopen("input.txt", "r", stdin);
//	 	freopen("output.txt", "w", stdout);
//	 #endif


		
	int t,i=1;
	cin >> t;
	while(t--)
	{	
		cout<< "Case #"<<i<<": ";
		solve();
		i++;
	}

	return 0;
}
