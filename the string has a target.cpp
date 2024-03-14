#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        string str1;
        cin>>str1;
        char s;
        char b= str1[0];
        ll cnt,flg=0;
        for(ll i=1; i<n; ++i)
        {
          if(str1[i]<=b)
          {
              b=str1[i];
             s=str1[i];
              cnt=i;
              flg=1;
          }
        }

        if(flg==1 && str1[0]>=s)
        {
            str1.insert(str1.begin()+0,s);
             str1.erase(str1.begin()+(cnt+1));
        cout<<str1<<nl;
        }
        else
            cout<<str1<<nl;
    }
}
