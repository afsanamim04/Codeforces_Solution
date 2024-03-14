#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll x,y,a,b; cin>>x>>y>>a>>b;
    ll m=(abs(x)+abs(y))*a;
    ll p=abs(x);ll q=abs(y);
    ll n=(min(p,q)*b)+(abs(p-q)*a);
    cout<<min(m,n)<<nl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
