#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll n,m; cin>>n>>m;
    ll n1=n,n2=n;
    int t=m;
    ll ans=(n*n);
    vector<int>v1(n+5,0),v2(n+5,0);
    vector<pair<int,int>>vec;
    while(m--)
    {
        int x,y;
        cin>>x>>y;
        vec.push_back(make_pair(x,y));
    }
    ll cnt=(n*2)-1;
    //cout<<ans<<nl<<cnt<<nl;
    for(int i=0; i<t; i++)
    {
       if(v1[vec[i].first]==0 && v2[vec[i].second]==0)
       {

           v1[vec[i].first]=1;
           v2[vec[i].second]=1;
           ans-=(n1+n2)-1;
           n1--;
           n2--;
       }
       else if(v1[vec[i].first]==1 && v2[vec[i].second]==0)
       {

           v2[vec[i].second]=1;
           ans-=n2;
           n1--;
          // cnt-=1;
       }
       else if(v1[vec[i].first]==0 && v2[vec[i].second]==1)
       {
           v1[vec[i].first]=1;
           ans-=n1;
           n2--;
           //cnt-=1;
       }
       if(ans<0) cout<<0<<' ';
       else
       cout<<ans<<' ';
    }
    cout<<nl;

}
int main()
{
    sol();
}
