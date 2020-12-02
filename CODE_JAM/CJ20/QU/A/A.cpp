

#include <bits/stdc++.h>
#include <set> 

using namespace std;

#define ll long long
#define ar array


void solve(){

	int N, r=0, c=0;
	ll k=0;
	cin >> N ;
	int M[100][100];

	set <int, greater <int> > s1;		 
	set <int, greater <int> > s2;

	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cin >> M[i][j];
			
			if(i==j) k+=M[i][j];

			s1.insert(M[i][j]); 
		}
		if(N-s1.size()!=0) r++ ;
		s1.clear();
	}

	s1.clear();

	for (int j = 0; j < N; ++j)
	{
		for (int i = 0; i < N; ++i)
		{			
			s1.insert(M[i][j]); 
		}

		if(N-s1.size()!=0) c++ ;

		s1.clear();
	}
//	printf("%d %d %d\n",k,r,c);
	
	cout << k <<" "<< r <<" "<< c <<"\n";
	
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
/*
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
*/
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