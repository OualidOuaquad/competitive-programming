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
  int msf = 0; 

   for(int j=0; j<k; ++j){
       cout<< (j)*n/k << "---"  << (j+1)*n/k - 1<< "\n"; 
       //v[j] = l[(j+1)*n/k-1]-l[j*n/k]; 
        msf = max(msf, l[(j+1)*n/k-1]-l[j*n/k]); 
   }
   sort(v.begin(), v.end(), greater<int>());
   //ans = v[0]/2;
   ans =(double)msf/2;
   
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


