// Abu Musa Ahmed ABIR!!
//Iterative Way of Binary Search

#include <bits/stdc++.h>

#define pb push_back
#define mkp make_pair
#define maxx 1000000005
#define MOD 1000003
#define mem(a) memset(a, 0, sizeof(a))
#define pi 3.14159265358979323846

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pr;
typedef vector<ll> vll;

ll binarySearch(ll arr[], ll l, ll r, ll x)
{
	while (l <= r)
	{
		ll m = l + (r - l) / 2;

		if (arr[m] == x)
			return m;

		if (arr[m] < x)
			l = m + 1;

		else
			r = m - 1;
	}
	return -1;
}

int main()
{

	ll arr[500000], x, n;

	cin >> n >> x;
	for (int i = 0; i < n; i++)
		cin >> arr[i]; //Must be a Sorted Array

	ll result = binarySearch(arr, 0, n - 1, x);
	(result == -1) ? cout << "Element is not present in array"
				   : cout << "Element is present at index " << result << endl;
	return 0;
}