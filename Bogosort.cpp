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
    vector<int>v;
    for(int i=0; i<n; i++)
    {
       int j; cin>>j;
       v.push_back(j);
    }

    sort(v.begin(),v.end());
    sort(v.begin(),v.end(),greater<int>());
    for(int i=0; i<v.size(); i++)
    {
       cout<<v[i]<<' ';
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
