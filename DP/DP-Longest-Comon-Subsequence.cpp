// Abu Musa Ahmed ABIR!!

#include <bits/stdc++.h>

#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define mkp make_pair
#define maxx 1000000005
#define MOD 1000003
#define mem(a) memset(a, 0, sizeof(a))
#define pi 3.14159265358979323846
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
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

int mem[50][50];

int LCS(int i, int j, string &S, string &W)
{
	if (i == S.size() || j == W.size())	return 0;

	if (mem[i][j] != empty)	return mem[i][j];

	int ans = 0;
	if (S[i] == W[j])
	{
		ans = (1 + LCS(i + 1, j + 1, S, W));
	}
	else {
		int val1 = LCS(i + 1, j, S, W);
		int val2 = LCS(i, j + 1, S, W);

		ans = max(val1, val2);
	}

	mem[i][j] = ans;
	return mem[i][j];

}



int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt", "r", stdin);
	// freopen("output.txt", "w", stdout);
	// #endif
	ios_base::sync_with_stdio(0);

	string s, w;

	cin >> s;
	cin >> w;

	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			mem[i][j] = -1;
		}
	}

	cout << LCS(0, 0, s, w) << endl;



	return 0;
}