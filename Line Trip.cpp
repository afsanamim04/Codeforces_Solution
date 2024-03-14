#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n,x;
    cin>>n>>x;
    vector<int>v,v1;
    v.push_back(0);
    for(int i=0; i<n; ++i )
    {
        int j; cin>>j;
        v.push_back(j);
    }
   // v.push_back(x);
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        int y=abs(v[i]-v[i+1]);
        v1.push_back(y);
    }
    int z=abs(v[n]-x)*2;
    v1.push_back(z);
    //for(auto it:v1) cout<<it<<' ';
    sort(v1.begin(),v1.end(),greater<int>());
    cout<<v1[0]<<nl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
