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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c && b==d)
        {
                cout<<0<<nl;
                continue;
        }
        if(b>d)
        {
            cout<<-1<<nl;
            continue;
        }

        ll s=d-b;
        if(a<c-s)
            cout<<-1<<nl;
        else
        {
            ll ans= a-(c-s)+s;
            cout<<ans<<nl;
        }
    }
    return 0;
}
