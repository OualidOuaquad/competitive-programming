#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve(){

    int n, k ; cin >> n >> k;
    int l[n];
    int p=0, d=0;
    double dns = 0; 

    for(int i=0; i<n ; ++i){
        cin>> l[i];
    }
    
    for(int i=1; i<n; ++i){ç
        if((l[i]-l[0])/i>dns){ç
            dns =( l[i]-l[0])/i ;
            p = i;
        }
    }



    
    cout.precision(3);
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

