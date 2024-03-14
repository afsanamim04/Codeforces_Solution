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
    vector<int>v,pre(n);
    set<int>s;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
        s.insert(x);
    }
    if(s.size()==1)
    {
        vector<int>v1(n); v1[0]=v[0];
      for(int i=1; i<n; i++)
      {
        v1[i]=v1[i-1]+v[i];
      }
      for(auto it: v1) cout<<it<<' ';
        cout<<nl;
        return;
    }
    pre[0]=v[0];
    pre[1]=(v[0]+v[1]);
    int cnt=0;
    for(int i=1; i<n-1; i++)
    {
       pre[i+1]=(pre[i]+v[i+1]);
        int p=abs(pre[i]-v[i+1]);
        if(abs(pre[i]-p)==v[i+1])
        {
            cnt=1;
            break;
        }
    }
    if(cnt==1) cout<<-1<<nl;
    else{
        for(auto it: pre) cout<<it<<' ';
        cout<<nl;
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
