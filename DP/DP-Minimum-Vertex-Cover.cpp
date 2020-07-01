// Abu Musa Ahmed ABIR!!

#include <bits/stdc++.h>

#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define mkp make_pair
#define maxx 102
#define MOD 1000003
#define mem(a) memset(a, -1, sizeof(a))
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


int mem[maxx][2];
int par[maxx];

vector<int> edges[maxx];

int minVer(int u, int isGuard){    
    if (mem[u][isGuard] != empty) {
        return mem[u][isGuard];
    }
        
    int answer = isGuard;
    
    for(auto v: edges[u]) {
        if (v == par[u]) continue;
        par[v] = u;
        if (isGuard == 0) {
            answer += minVer(v, 1);
            
        } else {
            answer += min(minVer(v, 1), minVer(v, 0));
          
        }
    }
    
    return mem[u][isGuard] = answer;
}



int main()
{
    ios_base::sync_with_stdio(0);

    mem(mem);
    mem(par);
    
    int n;
    cin>>n;
    for (int i = 1; i < n; i++) {
        int u, v;
        cin>>u>>v;

        edges[u].pb(v);
        edges[v].pb(u);
    }
    int ans = 0;
    
    ans = min(minVer(0, true), minVer(0, false));
    cout<<ans<<endl;
    
    
    return 0;
}