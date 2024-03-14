#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll x;
    cin>>x;
    vector<ll>v;
    while(x>=1)
    {
       if(x%2==1)
       v.push_back(1);
       x/=2;
    }
    cout<<v.size()<<nl;
    return 0;
}
