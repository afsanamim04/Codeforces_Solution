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
  string str,str2; cin>>str;
  set<char>s;
  for(int i=0; i<n; i++)
  {
      s.insert(str[i]);
      str2.push_back(str[i]);
      if(str2.find(str[i]) != string::npos)
      {

      }
  }
  int a= s.size();
  int ans= ((a*(a+1))/2)+((n-a)*a);
  cout<<ans<<nl;
  }

int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
