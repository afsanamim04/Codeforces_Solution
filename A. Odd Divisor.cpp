#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==1) cout<<"YES"<<nl;
        else
        {
            ll flg=0;
            for(ll i=3; i*i<=n; i+=2)
            {
                if(n%i==0)
                {
                    flg=1;
                    break;
                }
            }
            if(flg==0) cout<<"NO"<<nl;
            else cout<<"YES"<<nl;
        }
    }
}
