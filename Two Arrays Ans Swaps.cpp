#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n,k; cin>>n>>k;

        vector<int>v1,v2;

        for(int i=0; i<n; ++i)
        {
            int j; cin>>j;
            v1.push_back(j);
        }

        for(int i=0; i<n; ++i)
        {
            int k; cin>>k;
            v2.push_back(k);
        }

        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end(), greater<ll>());

       // for(auto it:v1) cout<<it<<" ";
       // for(auto it:v2) cout<<it<<" ";

        for(ll i=0; i<k; ++i)
        {
            if(v1[i]<v2[i])
                swap(v1[i],v2[i]);
        }

        ll sum=0;
        for(ll i=0; i<n; ++i)
        {
            sum+=v1[i];
        }
         cout<<sum<<nl;

    }
}
