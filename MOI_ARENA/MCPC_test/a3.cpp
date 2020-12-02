#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
void solve(){
   int n, k ; cin >> n >> k ;
   int l[n];
   double  ans=0 ;
   vector<int> v; 
   v.assign(k, 0); 

   for(int i=0; i<n; ++i)
      cin>>  l[i];
   
   int m = n ; 
   n++; 

   int i = 0;
   for(int j=0; j<k; ++j){
       while(l[i]<=((j+1)*n/k) && i<m-1){
             v[j] = max(v[j] ,  l[i+1] - l[i]);
             ++i; 
        }
   }
   sort(v.begin(), v.end(), greater<int>());
   ans = v[0]/2;
   
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

