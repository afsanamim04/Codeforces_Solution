#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n; cin>>n;
    if(n>=0)
        cout<<n;
    else
    {
        n=abs(n);
        ll x=n%10;
        n=n/10;
        ll y=n%10;
         n=n/10;
        if(x>y)
        {
            n=n*10+y;
        }
        else
        {
            n=n*10+x;
        }
        if(n==0)
        {
            cout<<n;
        }
        else
        {
            cout<<'-'<<n;
        }

    }
}
