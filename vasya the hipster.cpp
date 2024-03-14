#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    if(a>b)
    {
        cout<<b<<' ';
        ll x=(a-b)/2;
        cout<<x<<nl;
    }
    else
    {
        cout<<a<<' ';
        ll x=(b-a)/2;
        cout<<x<<nl;
    }
    return 0;
}
