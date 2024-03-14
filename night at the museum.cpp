#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
 string str,str2="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz", str3;
 cin>>str; ll cnt1=0,cnt2=0,flg=0;
 ll j=0;
 for(ll i=0; i<str.size(); ++i)
 {
     while(j<52)
     {
         if(str[i]==str2[j])
         {
            cnt1=j+1;
            j=cnt1;
         }
         if(str[i]==str2[k])
         {
             cnt2=k-50;
             k=cnt2;
         }
         if(cnt1>cnt2) flg=flg+cnt2;
         else flg+=cnt1;
         ++i; ++j;

     }
 }
 cout<<flg<<nl;
}
