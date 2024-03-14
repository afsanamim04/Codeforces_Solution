#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,res=0;
        cin>>n;
        vector<ll>v;
        v.push_back(0);
        int sum=0;
        for(ll i=0; i<n; i++)
        {
            ll j;
            cin>>j;
            sum+=j;
            v.push_back(sum);
        }

        for(ll i=1; i<n; i++)
        {
            vector<ll>v1;
            if(n%i==0)
            {
                for(ll j=i; j<=n; j+=i)
                {
                    v1.push_back(v[j]-v[j-(i)]);
                }
                sort(v1.begin(),v1.end());
                res =max(res,v1[(ll)v1.size()-1]-v1[0]);
            }
        }

        cout<<res<<endl;
    }
}
