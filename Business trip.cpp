#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll k;
    cin>>k;
    vector<ll>v(12);
    for(ll i=0; i<12; ++i) cin>>v[i];
    sort(v.begin(),v.end());
    ll sum1=0;
    for(ll i=0; i<12; ++i)
    {
        sum1=sum1+v[i];
    }
    ll cnt=1,sum=v[11];
    if(k==0)
    {
        cout<<0<<nl;
    }
    else if(sum1<k) {cout<<-1<<nl;}
    else
    {
        for(ll i=11; i>=0; i--)
        {
            if(k<=sum)
                break;
            else
            {
                sum=sum+v[i-1];
                cnt++;
            }
        }
        cout<<cnt<<nl;
    }


}
