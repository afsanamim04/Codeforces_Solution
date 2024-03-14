#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n,a,b;
    cin>>n>>a>>b;
    if((n-a)>b)
        cout<<b+1<<nl;
    else
        cout<<n-a<<nl;
}
