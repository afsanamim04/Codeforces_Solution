#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n; cin>>n;
    int cnt=0, sum=0;
    ll summ=0;
    for(ll j=1; j*j<=n; j++)
    {
        sum=sum+j;
        summ=summ+sum;
        if(summ>n) break;
        else cnt++;
    }
    cout<<cnt<<nl;
    return 0;
}
