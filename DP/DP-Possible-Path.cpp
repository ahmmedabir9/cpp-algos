// Abu Musa Ahmed ABIR!!

#include <bits/stdc++.h>

#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define mkp make_pair
#define maxx 100
#define MOD 1000003
#define mem(a) memset(a, 0, sizeof(a))
#define pi 3.14159265358979323846
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pii(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define out(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define empty -1

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pr;
typedef vector<ll> vll;



int X[maxx][maxx];
int n, m;


int possiblePath(int i, int j)
{
	if (i == n - 1 && j == m - 1)	return 1;
	if (X[i][j] == -1 || i >= n || j >= m)	return 0;

	int path1 = possiblePath(i, j + 1);
	int path2 = possiblePath(i + 1, j);
	int path3 = possiblePath(i + 1, j + 1);

	return path1 + path2 + path3;
}

int main()
{
	ios_base::sync_with_stdio(0);

	int x, i, j;
	cin >> n >> m;
	cin >> x;

	while (x--)
	{
		cin >> i >> j;

		X[i-1][j-1] = -1;
	}
	cout << possiblePath(0, 0) << endl;

	return 0;
}