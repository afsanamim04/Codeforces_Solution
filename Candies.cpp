#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void sol()
{
   ll n; cin>>n;
   for(int i=1; i<=30; i++)
   {
       int sum=0,k=1,flg=0;
       int j;
      while(sum<n)
       {
          sum+=(pow(2,i-1)*j);
          k++;
          if(n==sum)
          {
              cout<<j<<endl;
              flg++;
              break;
          }
          if(flg!=0) break;
       }
   }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
