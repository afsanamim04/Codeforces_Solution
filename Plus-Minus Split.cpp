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
    string str;
    cin>>str;
    vector<int>v1,v2;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
       if(str[i]=='+')
       {
          cnt++;
       }
       else
       {
           if(cnt!=0) v1.push_back(cnt);
           cnt=0;
       }

    }
   if(cnt!=0) {v1.push_back(cnt); cnt=0;}
   for(int i=0; i<n; i++)
    {
       if(str[i]=='-')
       {
          cnt++;
       }
       else
       {
           if(cnt!=0) v2.push_back(cnt);
           cnt=0;
       }

    }
    if(cnt!=0) {v2.push_back(cnt); cnt=0;}
    //for(auto it: v2) cout<<it<<' ';
    if(v1.size()==v2.size())
    {
        int ans=0;
        for(int i=0; i<v1.size(); i++)
        {
           ans+=(v1[i]-v2[i]);
        }
        cout<<abs(ans)<<nl;
    }
    else
    {
        if(v1.size()<v2.size())
        {
        int ans=0;
        for(int i=0; i<v1.size(); i++)
        {
           ans+=(v1[i]-v2[i]);
        }
       // if(ans>0)
        ans+=v2[v2.size()-1];
        cout<<abs(ans)<<nl;
        }
        else
        {
        int ans=0;
        for(int i=0; i<v2.size(); i++)
        {
           ans+=(v1[i]-v2[i]);
        }
        ans+=v1[v1.size()-1];
        cout<<abs(ans)<<nl;
        }
    }
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
