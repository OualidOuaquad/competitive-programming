
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	ll  R, C;
	ll ans=0 ;   // Nbr of the smallest squares ;
	cin >> R >> C ;

	
	ll i = 1; 

	while (i<min(R,C)){

		if(i%2 == 0){
			ans +=  (R-i)*(C-i); // losange vertical
		}
		
		if(i>=3 ){
			ans += (R-i)*(C-i)*2;  // losange oblique * 2 (pour la symetrie) 
		}

		ans +=  (R-i)*(C-i) ; //  carrés 
		i++;
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


		
	int t, i =1;
	cin >> t;
	while(t--)
	{	
		cout << "Case #"<< i <<": ";
		solve();
		i++;
	}

	return 0;
}
