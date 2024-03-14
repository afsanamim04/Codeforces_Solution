#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n,m,k; cin>>n>>m>>k;
    set<int>s1,s2,s;
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        if(j<=k)
        {
           s1.insert(j);
        }
    }
    for(int i=0; i<m; i++)
    {
        int j; cin>>j;
        if(j<=k)
        {
           s2.insert(j);
        }
    }
    if(s1.size()<(k/2) || s2.size()<(k/2))
    {
        cout<<"NO"<<nl;
        return;
    }
    s.insert(s1.begin(),s1.end());
    s.insert(s2.begin(),s2.end());
    if(s.size()>=k) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
