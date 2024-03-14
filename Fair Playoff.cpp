#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb    push_back
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
        if((a<c && a<d) && (b<c && b<d))
            cout<<"NO"<<nl;
        else if((a>c && a>d) && (b>c && b>d))
            cout<<"NO"<<nl;
        else
            cout<<"YES"<<nl;
    }
}
