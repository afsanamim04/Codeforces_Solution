#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll b,c,h; cin>>b>>c>>h;
        ll x=c+h;
        if(b==x)
        {
            cout<<(b+(x-1))<<nl;
        }
        else if(b>x)
        {
            cout<<(x+(x+1))<<nl;
        }
        else
            cout<<(b+(b-1))<<nl;
    }
}
