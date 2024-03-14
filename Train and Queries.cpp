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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0; i<n; i++) cin>>v[i];
        map<int,vector<int>>mp;
        for(int i=0; i<n; i++)
        {
            mp[v[i]].push_back(i);
        }
        while(k--)
        {
            int aj,bj;
            cin>>aj>>bj;

            if(mp[aj].empty() || mp[bj].empty())
            {
                cout<<"NO"<<nl;
                continue;
            }
            if(aj==bj)
            {
                cout<<"YES"<<nl;
                continue;
            }
            if(mp[aj].front()<mp[bj].back())
            {
                cout<<"YES"<<nl;
            }
            else cout<<"NO"<<nl;

        }
    }

}
