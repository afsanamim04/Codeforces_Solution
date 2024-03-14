#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    ll sum1=0,sum2=0;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
        sum1+=x;    }
    for(int i=0; i<n-1; i++)
    {
        if(v[i]+v[i+1]<k)
        {
            v[i+1]+=k-(v[i]+v[i+1]);
        }
    }
    for(int i=0; i<n; i++) sum2+=v[i];
    cout<<sum2-sum1<<nl;
    for(auto it: v) cout<<it<<' ';
    cout<<nl;
}
