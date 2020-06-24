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


int knapSack(int W, int wt[], int n, int val[])
{
	int i, w;
	int K[n + 1][W + 1];

	for (i = 0; i <= n; i++) {
		for (w = 0; w <= W; w++) {
			if (i == 0 || w == 0)
				K[i][w] = 0;
			else if (wt[i - 1] <= w)
				K[i][w] = max(
				              val[i - 1] + K[i - 1][w - wt[i - 1]],
				              K[i - 1][w]);
			else
				K[i][w] = K[i - 1][w];
		}
	}

	return K[n][W];
}



int main()
{
	ios_base::sync_with_stdio(0);

	int n, w, vl[2005], wt[2005], i;

	cin >> w >> n;

	fo(i, n)
	{
		cin >> wt[i] >> vl[i];
	}

	cout << knapSack(w, wt, n, vl) << endl;

	return 0;
}