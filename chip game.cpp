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
        ll n,m;
        cin>>n>>m;
        if((n%2==0 && m%2==0) || (n%2==1 && m%2==1))
            cout<<"Tonya"<<nl;
        else
            cout<<"Burenka"<<nl;
    }
}
