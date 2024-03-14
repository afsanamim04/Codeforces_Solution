#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    int n;
    cin>>n;
    vector<int>v1,v2;
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        v1.push_back(j);
    }
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        v2.push_back(j);
    }
    vector<pair<int,int>>v;
    for(int i=0; i<n; i++)
    {
        v.push_back(make_pair(v1[i],v2[i]));
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {
        cout<<v[i].first<<' ';
    }
    cout<<nl;
    for(int i=0; i<n; i++)
    {
        cout<<v[i].second<<' ';
    }
    cout<<nl;

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
