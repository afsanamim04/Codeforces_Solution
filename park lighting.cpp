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
        ll n,m;
        cin>>n>>m;
        if(n==1 && m==1)
            cout<<'1'<<nl;
        else
        {
            if(n%2==0)

            {
                cout<<(n/2)*m<<nl;
            }
            else{
                    if(m%2==0)
                    {
                        cout<<((((n-1)/2)*m)+(m/2))<<nl;
                    }
                    else
                    {
                cout<<((((n-1)/2)*m)+((m/2)+1))<<nl;
                    }
            }
        }
    }
}
