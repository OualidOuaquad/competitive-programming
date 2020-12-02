#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array
void solve(){
   int n, k ; cin >> n >> k ;
   int l[n], cluster_len[k];
   double  ans=0 ;
    
   int uni = 1 ;
   for(int i=0; i<n; ++i){
       cin >>  l[i];
       if(i && l[i]==l[0]){
           uni++;
       }
   }

   if(uni == n){
       ans = 0;
   }
   else{

       int j = 1, fst=l[0];

       for(int i=0; i<n&&j<=k ; ++i){
           if((double)l[i]/l[n-1] > (double)j/k){
               cluster_len[j-1] =  l[i-1]-fst;
               fst = l[i];
               j++;
           }
           else if((double)l[i]/l[n-1] == (double)j/k){
               cluster_len[j-1] =  l[i]-fst;
               fst = l[i+1];
               j++;
           }
       }

       for(int i =0; i<k; ++i){
           ans= max(ans, (double)cluster_len[i]/2);
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

