#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
void solve(){
	ll a[3], b[3];
	double oa=0.0, ob=0.0, AB =0.0, alpha=0.0;
	
	for(int i=0; i<6; ++i){
		if(i<3) cin >> a[i];
		else cin >> b[i-3];
	}
	
	double ans = 0.0;
	
	for(int i=0; i<3; i++){
		oa += a[i]*a[i];
		ob += b[i]*b[i];
		AB += (b[i]-a[i])*(b[i]-a[i]);
	}
	oa = sqrt(oa);
	ob = sqrt(ob);
	AB = sqrt(AB);

    alpha = 2*asin((double)0.5*AB/oa);

    ans = alpha*oa;
    
    	
	cout.precision(10);
	cout<< fixed;
	cout << ans << '\n';


}

int main(){
    
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t; 
    cin >> t ;
    while(t--)
        solve();
}

