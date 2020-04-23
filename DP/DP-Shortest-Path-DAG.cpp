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


ll w[20][20];
ll mem[20];


ll sortestPath(ll u, ll n)
{
	if(u==n-1)return 0;

	if(mem[u]!=empty)	return mem[u];

	ll ans = maxx;

	for(ll v=0;v<n;v++)
	{
		if(w[u][v]!=maxx)
		{
			ans = min(ans, sortestPath(v, n)+w[u][v]);
		}
	}
	mem[u]=ans;
	return mem[u];
}

int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);

    ll t, i, j, k, p, q, r, x, y, u, v, n, m;

    fo(i,20)
    {
    	memset(w[i], maxx, 20);
    }

    w[0][1]=4;
    w[0][2]=5;
    w[1][2]=7;
    w[1][4]=8;
    w[2][3]=4;
    w[2][6]=2;
    w[3][5]=10;
    w[4][5]=4;
    w[4][6]=1;
    w[5][5]=2;
    w[5][7]=10;
    w[6][7]=1;

    ll p0 = sortestPath(0, 8);
    ll p1 = sortestPath(1, 8);
    ll p2 = sortestPath(2, 8);
    ll p3 = sortestPath(3, 8);
    
    cout<<"FROM 0 TO 8: "<<p0<<endl;
    cout<<"FROM 1 TO 8: "<<p1<<endl;
    cout<<"FROM 2 TO 8: "<<p2<<endl;
    cout<<"FROM 3 TO 8: "<<p3<<endl;
    
    return 0;
}