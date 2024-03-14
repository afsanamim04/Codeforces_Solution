#include<bits/stdc++.h>
#define PI        acos(-1.0)
#define all(x)    x.begin(),x.end()
#define nl        '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n,t;
    cin>>n>>t;
    if(t==10 & n==1)
    {
        cout<<-1;
    }
    else{
    if(t==10)
    {
        cout<<1;
      for(ll i=1; i<n; i++)
    {
        cout<<0;
    }

    }
    else
    for(ll i=0; i<n; i++)
    {
        cout<<t;
    }
    }

}
