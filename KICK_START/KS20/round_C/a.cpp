
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array


void solve(){
	int n ,k; cin >> n >> k;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}

	int ans = 0;


	int t = k-1, j=0;
	for(int i=0; i<n; i++)
	{

		if(a[i]==k)
		{
			if(n-i<k-1 )
				break;
			else
			{
				if(a[i+1]==k-1)
				{
					for( j=i+1 ; j<i+k-1 ;j++){
						if(a[j] != t--) 	
							break;
					}
					if(j==i+k-1){
						ans++;
					}
				t = k-1;
				}				

//				if(a[i-1]==k-1)
//				{
//					for( j=i-1 ; j>i-k+1; j--){
//						if(a[j] != t--) 
//							break;
//					}
//					if(j == i-k+1 ){
//						ans++;
//					}
//					
//					t = k-1;
//				}


			}
		}
	}

	
	cout << ans << "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

		
	int t,i=1;
	cin >> t;
	while(t--)
	{	
		cout << "Case #"<< i <<": ";
		solve();
		i++;
	}

	return 0;
}
