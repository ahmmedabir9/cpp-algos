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


double bisec(int x)
{
	double low = 0.0, high = x;
	double mid;
	while (high - low > 0.000001)
	{
		mid = ((low + high) / 2);
		if (mid * mid > x)	high = mid;
		else low = mid;
	}

	return mid;
}


int main()
{
	ios_base::sync_with_stdio(0);

	double x;
	cin >> x;
	cout << bisec(x) << endl;

	return 0;
}