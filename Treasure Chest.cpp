#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
   int x,y,k;
   cin>>x>>y>>k;
   if(x>y) cout<<x<<endl;
   else
   {
       if(x+k>=y) cout<<y<<endl;
       else
        cout<<(x+k)+2*(y-(x+k))<<endl;
   }
}

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        sol();
    }
}
