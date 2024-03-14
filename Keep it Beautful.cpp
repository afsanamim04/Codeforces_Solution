#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll n;
    cin>>n;
    vector<ll>v,v1;
    for(ll i=0; i<n; ++i)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    ll x=v[0],y,p,m=0;
    v1.push_back(1);
    for(ll i=0; i<n-1; i++)
    {
        if(v[i]<=v[i+1])
        {
            v1.push_back(1);
        }
        else
        {
            // v1.push_back(1);
            y=v[i];
            p=i+1;
            m=1;
            break;
        }
    }

    if(m==1)
    {
        ll afs=0;
        for(ll i=p; i<n; i++)
        {

            if(afs==0)
            {
                if((v[i]<=x))
                {
                    v1.push_back(1);
                    y=v[i];
                    afs=1;
                }

            }
            if(afs==1)
            {

                if(v[i]<=x && v[i]>=y)
                {
                    v1.push_back(1);
                    x=v[i];
                }
                else
                {
                    v1.push_back(0);
                }
            }

            else
            {
                v1.push_back(0);
            }


        }

        for(auto it: v1) cout<<it;
        cout<<nl;
    }
    else
    {
        for(auto it: v1) cout<<it;
        cout<<nl;
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
