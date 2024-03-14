#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
       int j; cin>>j;
       v.push_back(j);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0; i<m; i++)
    {
        if(v[i]<0)
        sum+=abs(v[i]);
    }
    cout<<sum<<nl;
}
