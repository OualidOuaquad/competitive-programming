		

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
    string s, s1="KICK", s2="START";
    cin>> s ;
    int ans=0, a=0, n=s.size();

    for(int i=0; i<n; i++){ç
        if(i+1>=4 && s.substr(i+1-4, 4)== s1 )
            a++;

        if(i+1>=5 && s.substr(i+1-5, 5)== s2 )
            ans+=a;
    }
    cout<< ans << '\n'; 
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

    int t, i=1; 
    cin >> t;
    while(t--){ç
        cout << "Case #" << i << ": ";
        solve();
        ++i;   ç
    }    
return 0;
}


