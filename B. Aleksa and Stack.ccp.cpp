#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    endl
//#define pb    push_back
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
        ll a=1;
        for(ll i=1; i<=n; i++)
        {
            cout<<a<<' ';
            a+=2;
        }
        cout<<nl;

    }
}
