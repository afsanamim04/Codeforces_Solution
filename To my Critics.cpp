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
        ll a,b,c; cin>>a>>b>>c;
        if((a+b)>=10) cout<<"YES"<<nl;
        else if((b+c)>=10) cout<<"YES"<<nl;
        else if((a+c)>=10) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }
}
