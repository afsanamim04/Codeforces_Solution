#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
   int n,k,x;
   cin>>n>>k>>x;
   int v[n+1]={};
   for(int i=1; i<=n; i++)
   {
    cin>>v[i];
   }

   sort(v + 1, v + n + 1, greater<int>());

    for (int i = 1; i <= n; i++)
        v[i] += v[i - 1];
   int ans= -1e9;
   for(int i=0; i<=k; i++)
   {
      ans = max(ans, v[n] - 2 * v[min(i + x, n)] + v[i]);
   }
   cout<<ans<<nl;
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
