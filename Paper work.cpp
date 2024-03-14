#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll>v,v1;
    for(ll i=0; i<n; ++i)
    {
        ll j; cin>>j;
        v.push_back(j);
    }
    ll cnt=0,flg=0,afs=0;
    for(ll i=0; i<n; i++)
    {
        if(v[i]<0)
        {
            ++cnt;
            if(cnt<3)
            {
                ++flg;
            }
            else
            {
                ++afs;
                v1.push_back(flg);
                flg=1;
                cnt=1;
            }
        }
        else {flg++;}

        if(i==(n-1))
        {
            afs++;
            v1.push_back(flg);

        }
    }
    cout<<afs<<nl;
    for(ll i=0; i<afs; i++) cout<<v1[i]<<' ';
}
