// Abu Musa Ahmed ABIR!!

//Solution on o(n*n)

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




int mem[1000005];

int func(int i, vector<int> &a)
{

    if(mem[i] != empty) return mem[i];

    int ans = 0;
    for(int j = i + 1; j < a.size(); j++)
    {
        if(a[j] > a[i]) ans = max(ans, func(j, a));
    }


    mem[i] = ans + 1;
    return mem[i];
}


int LIS(vector<int> a, int n)
{
    for(int i = 0; i < n; i++)  mem[i] = empty;

    int ans = 0;

    for(int i = 0; i < n; i++)  ans = max(ans, func(i, a));

    return ans;
}




int main()
{
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ios_base::sync_with_stdio(0);

    int  i, n, x;


    vector<int>a;

    cin >> n;

    fo(i, n)
    {
        cin >> x;
        a.pb(x);
    }

    cout << LIS(a, n) << endl;

    return 0;
}