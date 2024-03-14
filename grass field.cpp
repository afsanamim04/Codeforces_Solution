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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0 && b==0 && c==0 && d==0)
        {
            cout<<0<<nl;
        }
        else if(a==1 && b==1 && c==1 && d==1)
            cout<<2<<nl;
        else
            cout<<1<<nl;
    }
}
