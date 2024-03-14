#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,x;
        cin>>n>>k>>x;
        ll sum=0;
        if((k-1)>x || k>n) cout<<-1<<nl;
        //else if(n>k && (k-x)>1) cout<<-1<<nl;
        else
        {
            sum=((k-1)*k)/2;
            ll mul=0;
            for(ll i=0; i<n-k; i++)
            {
                if(x==k)
                {
                    mul+=(x-1);
                }
                else
                    mul+=x;
            }
            //cout<<sum<<nl<<mul<<nl;
            cout<<sum+mul<<nl;
        }
    }
}
