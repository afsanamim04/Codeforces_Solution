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
    string s;
    cin>>s;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='A')
            v.push_back(i+1);
    }
    int ans=0;
    sort(v.begin(),v.end());
    if(v.size()==0)cout<<ans+(n-1-v[v.size()-1]+1)<<nl;
    else if(v.size()==n) cout<<0<<nl;
    else
    {
        for(int i=0; i<v.size()-2; i++)
        {
            if((v[i+1]-v[i]-1)==0) ans+=abs(v[i]-v[i+1]);
            else ans+=abs(v[i]-v[i+1]-1);
        }
        cout<<ans+(n-1-v[v.size()-1]+1)<<nl;
    }
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
