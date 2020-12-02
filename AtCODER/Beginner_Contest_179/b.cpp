	
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define ar array



int main() {
    	
	ios::sync_with_stdio(0);
	cin.tie(0);

    int n; cin>> n;
    int d[n][2];
    int ans =0;

    for(int i=0; i<n; ++i){
        cin >> d[i][0] >> d[i][1];
    }
    
    for(int i = 0; i<n-2; i++){

        if(d[i][0] == d[i][1]&& d[i+1][0] == d[i=1][1] && d[i+2][0] == d[i+2][1] )
          cout << "Yes";
        else 
            cout << "No";
    }


    

	
	return 0;
}
