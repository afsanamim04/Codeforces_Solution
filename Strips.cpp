#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,str;
        for(int i=0; i<8; i++)
        {
            cin>>str;
            s=s+str;
        }
      //  cout<<str<<endl;
      for(int i=0; i<8; i++)
      {
          if((s[i]==s[i+8]) && (s[i]==s[i+16]) && (s[i]==s[i+18]) && (s[i]==s[i+24]) && (s[i]==s[i+32]) && (s[i]==s[i+40] && (s[i]==s[i+48]) && (s[i]==s[i+56]) && s[i]!='.')
             {
                 cout<<s[i]<<nl;
                 return 0;
             }
      } int b=0,r=0;
      for(int i=0; i<63; i++)
      {
          if(s[i]=='B') b++;
          else b=0;
          if(b==8)
          {
              cout<<"B"<<nl;
                 return 0;
          }
      }
      for(int i=0; i<63; i++)
      {
          if(s[i]=='R') r++;
          else r=0;
          if(b==8)
          {
              cout<<"R"<<nl;
                 return 0;
          }
      }
    }
}
