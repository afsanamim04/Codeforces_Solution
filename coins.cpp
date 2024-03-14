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
        ll n,k;
        cin>>n>>k;
        if(n%2==0 || n%k==0)
            cout<<"YES"<<nl;
        else
        {
             n=n-k;
            if(n%2==0)
                cout<<"YES"<<nl;
            else
                cout<<"NO"<<nl;
        }
    }
    return 0;
}
