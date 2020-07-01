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



int comb(int n, int r)
{
	if (r == 0 || r == n)	return 1;
	if (r > n)	return 0;

	int com1 = comb(n - 1, r - 1);
	int com2 = comb(n - 1, r);

	return com1 + com2;
}

int main()
{
	ios_base::sync_with_stdio(0);

	int n, r;
	cin >> n >> r;
	cout << comb(n, r) << endl;

	return 0;
}