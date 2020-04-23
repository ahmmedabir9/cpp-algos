//Program to check the ways to make any specific amount with some given coin
//A coin can be used as many time as we want
//Solution with Dynamic Programming

#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;
typedef long long ll;

int main()
{
    ll way[100005], n, k, i, j, coin[100005];

    cin>>n>>k;
    for(i=0;i<k;i++)    cin>>coin[i];   //input coin values

    way[0]=1;  //initializing the base case
    for(i=1;i<n;i++)    way[i]=0;  //initializing all ways with 0

    for(i=1;i<=n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(i>=coin[j])    //condition
            {
                way[i]+=way[i-coin[j]];
            }
        }
    }

    cout<<way[n]<<endl;

    return 0;
}