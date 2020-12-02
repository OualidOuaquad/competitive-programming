
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

int target, vector<int> nums(5);

cin >> traget , nums;

vector<int> arr(2);

map<int, int>  M;

for (int i = 0; i < nums.size(); ++i)
{
	M[nums[i]]=i;
}

for (int i = 0; i < nums.size(); ++i)
{
	int comp = target - nums[i];
	if (M[comp] && M[comp]!=i )
	{
		arr[0]=i;
		arr[1]=M[comp];
	}
}
