	
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array



int main() {
    	
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n ; cin>> n ;
	int x[n];
	ld ans1 =0; 
	int ans2 =0, ans3 =-10000;
	for (int i = 0; i < n; ++i)
	{
		cin>>x[i];
		ans1+= abs(x[i]);
		ans2+= x[i]*x[i];
		ans3= max(ans3, x[i]);
	}
	cout<<ans1<<"\n";
	cout.precision(15);
	cout<< fixed <<sqrt(ans2)<<"\n";
	cout<<ans3;
	return 0;
}
