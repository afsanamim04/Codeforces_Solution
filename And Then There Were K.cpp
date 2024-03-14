#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void sol()
{
   ll n;
   cin>>n;
   ll k=0,ans=1;
   while(ans<=n)
   {
       ans=ans*2;
   }
   ans/=2;
   cout<<ans-1<<endl;
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        sol();
    }
}
