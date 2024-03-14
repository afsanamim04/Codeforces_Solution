#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n; cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end(), greater<int>());
    cout<<v[0]-v[n-1]<<nl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
