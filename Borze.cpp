#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    string str;
    cin>>str;
    vector<ll>v;
    ll j=0;
      while(str[j]!='\0')
      {
          if(str[j]=='-' && str[j+1]=='.')
          {
              v.push_back(1);
              str.erase(str.begin()+j);
              str.erase(str.begin()+j);
              j=0;
          }
          else if(str[j]=='-' && str[j+1]=='-')
          {
              v.push_back(2);
              str.erase(str.begin()+j);
              str.erase(str.begin()+j);
              j=0;
          }
          else if(str[j]=='.')
          {
              v.push_back(0);
              str.erase(str.begin()+j);
              //str.erase(str.begin()+j);
              j=0;
          }
      }
          for(auto it: v) cout<<it;
        //  else j++;
}
