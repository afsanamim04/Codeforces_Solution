#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll n,k;
    cin>>n>>k;
    ll p= 4*n-4;
    if(k==(4*n-2))
    {
        cout<<(k/2)+1<<nl;
    }
    else
    {
        if(k%2==0)
            cout<<k/2<<nl;
        else cout<<(k/2)+1<<nl;
    }
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
