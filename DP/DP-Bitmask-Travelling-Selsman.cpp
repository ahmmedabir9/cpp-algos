// Abu Musa Ahmed ABIR!!

#include <bits/stdc++.h>

#define pb push_back
#define fo(i,n) for(i=0;i<n;i++)
#define mkp make_pair
#define maxx 32
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

#define INF 1061109567

int w[maxx][maxx];
int mem[maxx][1<<maxx];

int turnOn(int x, int pos) {
    return x | (1<<pos);
}

bool check(int x ,int pos) {
    return (bool)(x & (1<<pos));
}

int n;
int travel(int i, int mask) {
    if (mask == (1<<n) - 1) {
        return w[i][0];
    }
    
    if (mem[i][mask] != -1) {
        return mem[i][mask];
    }
    
    int ans = INF;
    for (int j = 0;j < n;j++) {
        if (w[i][j] == INF) continue;
        
        if (check(mask,j) == 0) {
            int result = travel(j, turnOn(mask, j)) + w[i][j];
            ans = min(ans, result);
        }
    }
    
    return mem[i][mask] = ans;
}


int main()
{
    ios_base::sync_with_stdio(0);

    
    
    return 0;
}
