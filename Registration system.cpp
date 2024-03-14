#include<bits/stdc++.h>
#define nl    endl
#define ll    long long int
#define pb    push_back
using namespace std;
int main()
{
    ll n; cin>>n;
    vector<string>v;
    vector<string>v1;
    //cin.ignore();
    for(ll i=0; i<n; ++i)
    {
        string j;
        cin>>j;
        v.pb(j);
        v1.pb(j);
    }
    for(ll i=0; i<n; ++i)
    {
        ll p='1';

        for(ll j=i+1; j<n; j++)
        {

            if((v[i]==v[j]) && v[i]!="OK")
            {
                v[j]+=p;
                p++;
            }
        }
    }
 for(ll i=0; i<v1.size(); ++i)
 {
     if(v1[i]==v[i])
        cout<<"OK"<<nl;
     else
        cout<<v[i]<<nl;
 }

}
