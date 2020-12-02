

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ar array


int quick_pow10(int n)
{
    static int pow10[10] = {
        1, (ll)1e1, (ll)1e2, 1000, 10000, 
        100000, 1000000, 10000000, 100000000, 1000000000
    };

    return pow10[n]; 
}

void solve(){
	ll N , a=0, b=0;
	cin >> N;

	ll m = N;
	int i = 0 ;
	while(m>0){
		if(m%10 == 4){
			a+=3*  quick_pow10(i);
			b+=1*  quick_pow10(i);
		}
		else{
			a+= (m%10) *   quick_pow10(i);

		}
		i++;
		m=m/10;
	}




	cout << a<< " " << b << endl;
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