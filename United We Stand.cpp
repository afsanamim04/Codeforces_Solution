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
        vector<ll>v(n+5),b,c,v1;
        for(ll i=0; i<n; ++i) cin>>v[i];
        sort(v.begin(),v.end());
        v.front();
        //for(ll i=0; i<n; i++) v1[i]=v[i];
        c.push_back(v[n-1]);
        for(ll i=n-1; i>=0; i--)
        {
            if(v[i]==v[i-1])
                c.push_back(v[i-1]);
            else
                for(ll j=i-1; j>=0; j--)
                {
                    b.push_back(v[j]);
                }
                break;
        }
        if(b.size()==0 || c.size()==0)
            cout<<-1;
        else

        {
            cout<<b.size()<<' '<<c.size()<<nl;
            for(ll i=0; i<b.size(); i++)
            {
                cout<<b[i]<<' ';
            }
            cout<<nl;
            for(ll i=0; i<c.size(); i++)
            {
                cout<<c[i]<<' ';
            }

        }
        cout<<nl;
    }
}
