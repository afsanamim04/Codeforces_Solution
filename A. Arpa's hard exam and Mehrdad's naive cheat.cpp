#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n,res=1, base=8, mod=10;
    cin>>n;
    while(n)
    {
        if(n%2==1)
        {
            res=(res*base)%mod;
            n--;
        }
        else
        {
            base=(base*base)%mod;
            n/=2;
        }
    }
    cout<<res%10<<nl;
    return 0;
}
