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
        ll n; cin>>n;
        if(n==1)
            cout<<2<<nl;
        else if(n%3==0)
            cout<<(n/3)<<nl;
        else if(n%3==1)
            cout<<((n/3)+1)<<nl;
        else if(n%3==2)
            cout<<((n/3)+1)<<nl;
    }
}
