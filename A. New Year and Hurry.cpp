#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n,k; cin>>n>>k;
    ll p=240-k;
    ll sum=0,cnt=0,flg=0;
    for(ll i=1; i<=n; i++)
    {
        sum+=(i*5);
        if(sum>p)
        {
            cnt=i-1;
            flg++;
            break;
        }
        else if(sum==p)
        {
            cnt=i;
            flg++;
            break;
        }
    }
    if(flg==0)
    {
        cout<<n<<nl;
    }
    else
    {
        cout<<cnt<<nl;
    }
}
