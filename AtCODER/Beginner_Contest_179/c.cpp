#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array



int main() {
	int n;
	cin >> n ;
	
	for(int i=1; i<=n; ++i)
	{
	     if(n%i==0)
			cout<< i <<'\n';
	}
	return 0;
}
