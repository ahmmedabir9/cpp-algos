// Abu Musa Ahmed ABIR!!

#include <bits/stdc++.h>

#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define mkp make_pair
#define maxx 1000000005
#define MOD 1000003
#define mem(a) memset(a, 0, sizeof(a))
#define pi 3.14159265358979323846
#define si(x)   scanf("%d",&x)
#define sl(x)   scanf("%lld",&x)
#define ss(s)   scanf("%s",s)
#define pii(x)  printf("%d\n",x)
#define pl(x)   printf("%lld\n",x)
#define ps(s)   printf("%s\n",s)
#define out(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define empty -1

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pr;
typedef vector<ll> vll;

ll coin[52], m;
ll dp[52][252];
bool calc[52][252];

ll solve(ll i, ll target)
{
    if (target < 0) return 0;
    if (target == 0)   return 1;

    if (i > m) return 0;

    if (calc[i][target] == false)
    {
        dp[i][target] = solve(i, target - coin[i]) + solve(i + 1, target);
        calc[i][target] = true;
    }

    return dp[i][target];

}

int main()
{
    ios_base::sync_with_stdio(0);

    ll n, i;

    cin >> n >> m;

    for (i = 1; i <= m; i++)
    {
        cin >> coin[i];
    }

    cout << solve(1, n) << endl;

    return 0;
}