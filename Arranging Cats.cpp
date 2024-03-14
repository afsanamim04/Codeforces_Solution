#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
   int n;
   cin>>n;
   string str1,str2;
   cin>>str1>>str2;
   int cnt=0,a=0,b=0;
   for(int i=0; i<n; ++i)
   {
       if(str1[i]=='0' && str2[i]=='1') a++;
       else if(str1[i]=='1' && str2[i]=='0') b++;
   }
   cout<<min(a,b)+abs(a-b)<<nl;
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
