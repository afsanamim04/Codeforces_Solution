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
        vector<char>v1(n+5),v2;
        for(ll i=0; i<n; i++) cin>>v1[i];
        v2.push_back(v1[0]);
        for(ll i=1; i<n-1; i++)
        {
            v2.push_back(v1[i]);
            v2.push_back(v1[i]);
        }
        v2.push_back(v1[n-1]);
//         for(ll i=0; i<v2.size(); i++) cout<<v2[i];
//         cout<<nl;
        ll cnt=v2.size();
        ll flg=1;
       for(ll i=0; i<v2.size()/2; i+=2)
        {
            for(ll j=i+2; j<=(v2.size()/2)-(flg); j+=2)
            {
                if(v2[i]==v2[j] && v2[i+1]==v2[j+1]){
//                  v2.erase(v2.begin()+i);
//                v2.erase(v2.begin()+(i+1));
                  cnt=cnt-2;
                }
                flg++;
            }

        }

        cout<<cnt/2<<nl;

    }
}
