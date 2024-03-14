#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int n; cin>>n;
    vector<pair<int,int>>v;
    for(int i=0; i<n; i++)
    {
        int x, y; cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    int a=0,d=0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i].first<v[i+1].first && v[i].second>v[i+1].second)
            a++;

    }
   // cout<<a<<nl<<d<<nl;
    if(a>=1) cout<<"Happy Alex"<<nl;
    else cout<<"Poor Alex"<<nl;
}
