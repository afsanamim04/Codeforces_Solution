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
        if(n<7) cout<<"NO"<<nl;
        else
        {
            if(n%3==0)
            {
                ll x=n-5;
                ll y=1;
                ll z=4;
                if(x==y || x==z || x%3==0)
                    cout<<"NO"<<nl;
                else
                {
                    cout<<"YES"<<nl;
                    cout<<x<<' '<<y<<' '<<z<<nl;
                }
            }
            else if((n-1)%3==0)
            {
                ll x=n-3;
                ll y=1;
                ll z=2;
                if(x==y || x==z || x%3==0)
                    cout<<"NO"<<nl;
                else
                {
                    cout<<"YES"<<nl;
                    cout<<x<<' '<<y<<' '<<z<<nl;
                }
            }
            else if((n-2)%3==0)
            {
                ll x=n-3;
                ll y=1;
                ll z=2;
                if(x==y || x==z || x%3==0)
                    cout<<"NO"<<nl;
                else
                {
                    cout<<"YES"<<nl;
                    cout<<x<<' '<<y<<' '<<z<<nl;
                }

            }
        }
    }
}
