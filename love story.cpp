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
            string str1="codeforces",str2;
                cin>>str2;
                ll cnt=0;
            for(ll i=0; i<10; ++i)
            {
                if(str1[i]!=str2[i])
                {
                    cnt++;
                }
            }
            cout<<cnt<<nl;
          }
          return 0;
}
