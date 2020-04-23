//Program to check if possible to make any specific amount with some given coin
//A coin can be used as many time as we want
//Solution with Dynamic Programming

#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;
typedef long long ll;

int main()
{
    ll possible[100005], n, k, i, j, coin[100005];

    cin>>n>>k;
    for(i=0;i<k;i++)    cin>>coin[i];   //input coin values

    possible[0]=1;  //initializing the base case
    for(i=1;i<n;i++)    possible[i]=0;  //initializing all posibilities with 0

    for(i=1;i<=n;i++)
    {
        for(j=0;j<k;j++)
        {
            if(i>=coin[j] && possible[i-coin[j]]==1)    //condition of amount possibility
            {
                possible[i]=1;  //if possible, initialize it with 1 and break
                break;
            }
        }
    }

    if(possible[n]==1)  cout<<"Possible"<<endl;
    else    cout<<"Impossible"<<endl;

    return 0;
}