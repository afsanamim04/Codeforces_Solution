#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

ll ic(int n, vector<int>&v)
{
    ll c=0,res=0;
    for(int i=n-1; i>=0; i--)
    {
        if(v[i]==0) c++;
        else res+=c;
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        int ans = ic(n,v);
        for(int i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                v[i]=1;
                ans=max(ans,ic(n,v));
                v[i]=0;
                break;
            }
        }

        for(int i=n-1; i>=0; i--)
        {
            if(v[i]==1)
            {
                v[i]=0;
                ans=max(ans,ic(n,v));
                v[i]=1;
                break;
            }
        }

        cout<<ans<<nl;
    }
}
