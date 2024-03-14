#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll x1,x2,x3;
    cin>>x1>>x2>>x3;
    vector<ll>v;
    v.push_back(x1);
    v.push_back(x2);
    v.push_back(x3);
    sort(v.begin(),v.end());
    ll cnt= (v[2]-v[1])+(v[1]-v[0]);
    cout<<cnt<<nl;
}
