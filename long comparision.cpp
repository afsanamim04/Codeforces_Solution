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
        ll x1,p1,x2,p2;
        cin>>x1>>p1>>x2>>p2;
        x1=(x1*(pow(10,p1)));
        x2=(x2*(pow(10,p2)));
        if(x1>x2) cout<<">"<<nl;
        if(x1<x2) cout<<"<"<<nl;
        if(x1==x2) cout<<"="<<nl;
    }
}
