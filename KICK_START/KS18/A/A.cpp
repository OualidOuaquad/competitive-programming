
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	ll N, ans= 0;
	cin >> N;
	ll m = N, i = 0; 

	while(m>0){
		m/=10;
		i++;
	}
	i--;
	m = N;

	int j = i ;
	// while(m/(int)pow(10,j)%2==0 and j>=0){
	// 	cout<<"\t ############ \n";
	// 	j--;
	// }
	while(j>0){
		if(m/(ll)pow(10,j)%2==0){
			j--;
		}
		else break;
	
		// cout<<"\n\t ###### j: " << j <<" ###### \n";
		
	}	

	if (j>=0)	
	{
		ll u, l, f = (ll) N/(ll)pow(10,j);
	
		if(f%2 != 0 ){
			u = (f+1)*(ll)pow(10,j);
			l = (f-1)*(ll)pow(10,j);
			for(int k =0 ; k<j; k++){
				l+= 8*(ll)pow(10,k); 
			}
	 	ans = min(N-l,u-N) ;
		}
	}
	cout << ans << "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif


		
	int t,i =1  ;
	cin >> t;
	while(t--)
	{	
		cout <<"Case #"<< i << ": "; 
		solve();
		i++;
	}

	return 0;
}
