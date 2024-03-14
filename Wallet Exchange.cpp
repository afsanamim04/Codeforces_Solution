#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll a,b;
    cin>>a>>b;
    if(abs(a-b)%2==0)
        cout<<"Bob"<<nl;
    else cout<<"Alice"<<nl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
