#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll n;
    cin>>n;
    if(n%2!=0) cout<<0<<nl;
    else if(n<5) cout<<0<<nl;
    else
    {
        ll p=n/2;
        if(p%2!=0)
        {
            cout<<p/2<<nl;
        }
        else cout<<(p/2)-1<<nl;
    }
}
