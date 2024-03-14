#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>v1,v2,v;
    for(int i=0; i<n; ++i)
    {
        int j;
        cin>>j;
        v1.push_back(j);
    }
    for(int i=0; i<n; ++i)
    {
        int j;
        cin>>j;
        v2.push_back(j);
    }
    int sum=0;
    if(k<=n)
    {
        sum+=v1[0];
        for(int i=1; i<k; i++)
        {
            int p= v2[i-1];
            sum+=max(p,v1[i]);
        }
    }
    else
    {
        sum+=v1[0];
        for(int i=0; i<n-1; i++)
        {
            v.push_back(v2[i]);
            int p= *max_element(v.begin(),v.end());
            sum+=max(p,v1[i+1]);
        }
        v.push_back(v2[n-1]);
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0; i<(k-n); i++)
        {
            sum+=v[0];
        }
    }
    cout<<sum<<nl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
