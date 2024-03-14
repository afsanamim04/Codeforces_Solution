#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll a,b,c;
    cin>>a>>b>>c;
    vector<ll>v;
    v.push_back(a+b+c);
    v.push_back(a*b*c);
    v.push_back((a+b)*c);
    v.push_back(a+(b*c));
    v.push_back((a*b)+c);
    v.push_back(a*(b+c));
    sort(v.begin(),v.end(),greater<ll>());
    cout<<v[0]<<nl;
    return 0;

}
