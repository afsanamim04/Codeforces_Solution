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
    vector<ll>v,v1;
    set<ll>s;
    for(int i=0; i<n; i++)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    // sort(v.begin(),v.end());
    int j=n;
    for(int i=n-1; i>0; i--)
    {
        if(v[i-1]-v[i]==1)
        {
            j--;
            s.insert(v[i]+j);
            j--;
        }
        else
        {
            s.insert(v[i]+j);
            j--;
        }
    }
    s.insert(v[0]+1);
    for(auto it: s)
    {
      v1.push_back(it);
    }
    sort(v1.begin(),v1.end(),greater<int>());
    for(auto it: v1)
    {
      cout<<it<<' ';
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
