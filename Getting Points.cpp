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
        ll n,p,l,t;
        cin>>n>>p>>l>>t;
        ll d;
        if(n%7==0) d=n/7;

        else d=(n/7)+1;
        if(((d*t)+l)>=p) cout<<n-1<<nl;
        else if(t>=p) cout<<n-1<<nl;
        else
        {
            ll ans=p-(d*t);
            ll a=(ans/l);
            if(ans%l==0)
            {
                if(a>d)
                    cout<<(n-a)<<nl;
                else
                    cout<<(n-d)<<nl;
            }
            else
            {
                if((a+1)>d)
                    cout<<(n-a)+1<<nl;
                else
                    cout<<(n-d)+1<<nl;

                // cout<<n-(a+1)<<nl;
            }
        }

    }
}
