#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<long long>v;
        for(long long i=0; i<n; i++)
        {
            long long x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        if(v[0]!=1)
        {
            cout<<"NO"<<'\n';
            continue;
        }
        long long ans=v[0];
        for(long long i=1; i<n; i++)
        {
            if(v[i]<=ans)
            {
               ans+=v[i];
            }
            else
            {
                ans=-1;
                break;
            }

        }
        if(ans==-1) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';

    }
}
