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
        ll n; cin>>n;
        vector<ll>v;
        for(ll i=0; i<n; ++i)
        {
            ll j; cin>>j;
            v.push_back(j);
        }
       ll i=0,j=n-1;
       ll l=v.size();
       ll cnt=0;
       while(i<=j)
       {
         if(v[i]==1 && v[j]==0)
         {

             v[j]=1;
             v[i]=0;
             i++;
             j--;
            // v.erase(v.begin()+i);// ei line e ki somossha??
             ++cnt;
         }

             else if(v[j]==0 && v[i]==0)
             {
                 i++;
             }

         else if(v[j]==1 && v[i]==1)
            j--;
        else
            j--;;
       }
       cout<<cnt<<nl;
    }
}
