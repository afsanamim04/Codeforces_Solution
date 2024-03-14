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
        ll n,k; cin>>n>>k;
        string str; cin>>str;
        ll i=0,cnt=0;
        for(ll i=0; i<n; i++)
        {
            if(str[i]=='B')
            {
               i+=k-1;
               cnt++;
            }
        }
        cout<<cnt<<nl;
    }
}
