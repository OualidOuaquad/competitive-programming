

#include <bits/stdc++.h>
#include <string> 

using namespace std;

#define ll long long
#define ar array


void solve(){

	int v[1000];
	string s ;
	getline(cin, s);
	int count = 0;
	while (s[count] != '\0')
		count++;

	for (int i = 0; i < count; ++i)
	{
		v[i]=(int) s[i] - '0'; 
	}

	int i=0;
	for (int i = 0; i < count; ++i)
	{
		if(i=0){
			for (int j = 0; j < v[i]; ++j)
			{
				str1.insert(i, '('); 
			}


		}

	}

	
	
	
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif

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