#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll n; cin>>n;
    if(n%2==0) cout<<n/2<<' '<<n/2<<nl;
    else cout<<n/2<<' '<<(n/2)+1<<nl;
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
