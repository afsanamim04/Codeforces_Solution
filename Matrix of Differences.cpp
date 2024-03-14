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
    vector<int>v1,v2;
    for(int i=1; i<=(n*n)/2; i++)
    {
        v1.push_back(i);
    }
    for(int i=n*n; i>((n*n)/2); i--)
    {
        v2.push_back(i);
    }
    vector<int>v;// v=v1+v2;*/ for(auto it:v) cout<<it<<' '; cout<<nl;
    for(int i=0; i<(n*n)/2; i++)
    {
        v.push_back(v1[i]);
        v.push_back(v2[i]);
    }
    if(n%2!=0) {v.push_back(v2[v2.size()-1]);}
    int j=1;
    for(int i=0; i<n*n; i+=n)
    {
      if(j%2==0)
      {
          reverse(v.begin()+i,v.begin()+(i+n));
      }
      j++;
    }
    for(int i=0; i<n*n; i++)
    {
        cout<<v[i];
        if(((i+1)%n)==0 && i!=0) cout<<nl;
        else cout<<' ';
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
