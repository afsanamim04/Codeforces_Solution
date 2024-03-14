#include<bits/stdc++.h>
#define nl endl
#define ll long long int
using namespace std;
int main()
{
   ll n; cin>>n;
   vector<string>v;
   for(ll i=0; i<n; ++i)
   {
       string j; cin>>j;
       v.push_back(j);

   }
   for(i=0; i<n; i++)
   {
       string str;
       for(int j=0; j<n; j++)
       {
           str=v[i]+v[j];
       }
   }
}
