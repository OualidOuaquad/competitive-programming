
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array



int main() {
    string s;
    cin >> s; 
    if(s[s.size()-1] == 's')
        cout << s<<"es";
    else
        cout<< s << "s";
    cout<<'\n'; 
	return 0;
}
