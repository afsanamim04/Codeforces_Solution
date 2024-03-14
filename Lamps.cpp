#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<long long>b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            cin>>b[i];
        }
        map<int,vector<long long>>lamps;
        for(int i=0; i<n; i++)
        {
            lamps[a[i]].push_back(b[i]);
        }
        for(int i=0; i<n; i++)
        {
            if(lamps[i].empty()) continue;
            sort(lamps[i].begin(),lamps[i].end(),greater<int>());
        }
        long long ans=0;
        for(auto [v,lights]:lamps)
        {
            int t=0;
            for(auto i:lights)
            {
                if(t==v)
                    break;
                t++;
                ans+=i;
            }

       }
       cout<<ans<<'\n';
    }
}
