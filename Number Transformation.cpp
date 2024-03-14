#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int x,y;
    cin>>x>>y;
    if(y%x==0)
    {

            cout<<1<<' '<<y/x<<nl;

    }
    else cout<<0<<' '<<0<<nl;
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
