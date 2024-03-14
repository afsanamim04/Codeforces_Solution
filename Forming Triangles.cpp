#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int fact(int n)
{
      if(n==0)
      return 1;
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}
int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
void sol()
{
    int n; cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        v.push_back(j);
    }
    ll cnt=nCr(n,3);
    sort(v.begin(), v.end());
    for(int i=0; i<n-1; i++)
    {
      int p=pow(2,v[i])+pow(2,v[i+1]);
      for(int j=i+2; j<n; j++)
      {
          if(pow(2,v[j])>=p)
          {
              cnt-=(n-j);
              break;
          }
      }
    }
    sort(v.begin(), v.end(),greater<int>());
    for(int i=0; i<n-1; i++)
    {
      int p=pow(2,v[i])-pow(2,v[i+1]);
      for(int j=n-1; j>i; j--)
      {
          if(pow(2,v[j])<=p)
          {
              cnt-=(n-j);
              break;
          }
      }
    }
    cout<<cnt<<nl;
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
