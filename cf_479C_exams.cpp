#include "pch.h"
#include <bits/stdc++.h>

using namespace std;
typedef pair<int, int> pr;

int main()
{
	int n;
	cin >> n;
	vector<pr> ab;
	for (int i = 0;i < n;++i)
	{
		int m, n;
		cin >> m >> n;
		ab.push_back(make_pair(m,n));
	}
	sort(ab.begin(), ab.end());
	int curr = ab[0].second;
	for (int i = 1;i < n;++i)
	{
		if (ab[i].second >= curr)
			curr = ab[i].second;
		else
			curr = ab[i].first;
	}
	cout << curr;
}

