#include<bits/stdc++.h>
using namespace std;

void sol()
{
   long long int n,k,x;
   cin>>n>>k>>x;
   long long int sum=0,m=n;
   for(int i=1; i<=k; i++)
   {
      sum+=m; m--;
   }
  // cout<<sum<<endl;
   long long int p=((n*(n+1))/2);
   long long int q=((k*(k+1))/2);
   if(p<x) cout<<"NO"<<endl;
   else if(q>x) cout<<"NO"<<endl;
   else if(sum<x) cout<<"NO"<<endl;
   else cout<<"YES"<<endl;
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
