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

#define MAX_N 20
#define MAX_W 10000
#define INF 99999999

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pr;
typedef vector<ll> vll;

int c[MAX_N];
int mem[MAX_N][MAX_W];
int n;

int coin(int i, int w)
{
	if (w < 0)	return INF;
	if (i == n) {
		if (w == 0)	return 0;

		return INF;
	}

	if (mem[i][w] != empty)	return mem[i][w];

	//if a coin used once only
	// int res1 = 1 + coin(i + 1, w - c[i]);
	
	//if a coin used many times
	int res1 = 1+coin(i, w-c[i]);	
	
	int res2 = coin(i + 1, w);

	mem[i][w] = min(res1, res2);

	return mem[i][w];
}

int main()
{
	ios_base::sync_with_stdio(0);

	int i, j, w;

	fo(i, MAX_N)
	{
		fo(j, MAX_W)
		{
			mem[i][j] = empty;
		}
	}

	cin >> n >> w;
	fo(i, n)
	{
		cin >> c[i];
	}

	cout << coin(0, w) << endl;

	return 0;
}