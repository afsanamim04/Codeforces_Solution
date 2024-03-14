#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void solve()
{
    int n; cin>>n;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        ll sum=0;
        sum+=(v[n-1]-v[0]);
        sum+=(v[n-1]-v[0]);
        sum+=(v[n-2]-v[1]);
        sum+=(v[n-2]-v[1]);
        cout<<sum<<nl;
}
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        solve();
    }
}
