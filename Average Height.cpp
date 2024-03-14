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
   vector<int>v,v1,v2;
   for(int i=0; i<n; i++)
   {
       int j; cin>>j;
       v.push_back(j);
   }
   for(int i=0; i<n; i++)
   {
       if(v[i]%2==1) v1.push_back(v[i]);
       else v2.push_back(v[i]);
   }
   for(int i=0; i<v1.size(); i++)
   {
      cout<<v1[i]<<' ';
   }
   for(int i=0; i<v2.size(); i++)
   {
      cout<<v2[i]<<' ';
   }
   cout<<nl;

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
