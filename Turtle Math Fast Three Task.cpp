#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
using namespace std;
void solve()
{
    int n; cin>>n;
    int cnt=0;
    int sum=0;

    for(int i=0; i<n; i++)
    {
       int p; cin>>p;
      if(p%3==1) cnt=1;
       sum+=p;

    }
    if(n==1 && sum%3!=0)
    {
        cout<<1<<nl;
        return;
    }
    if(sum%3==0 || sum==0)
    {
        cout<<0<<nl;
        return;
    }
    else if(sum%3==1 && cnt==1)
    {
        cout<<1<<nl;
        return;
    }
    else if(sum%3==2)
    {
        cout<<1<<nl;
        return;
    }
    else cout<<2<<nl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}
