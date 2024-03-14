#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll n;
    cin>>n;
    string s1,s2;
    cin>>s2;
    s1=s2;
    reverse(s2.begin(),s2.end());
    int flg=0;
    for(int i=0; i<s1.size()/2; i++)
    {
      if(s1[i]-'a'==s2[i]-'a') continue;
      if(s1[i]-'a'>s2[i]-'a')
      {
          flg=1;
          break;
      }
      else
      {
          flg=0; break;
      }
    }
    if(flg==1)
    {
        cout<<s2+s1<<nl;
        return;
    }
    cout<<s1<<nl;

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
