#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{

        int n,a,b,c;
        cin>>n>>a>>b>>c;
        int dp[n+1];
        dp[0]=0;
        int x,y,z;
        for(int i=1; i<=n; i++)
        {
            x=INT_MIN, y=INT_MIN, z=INT_MIN;
            if(i>=a) x=dp[i-a];
            if(i>=b) y=dp[i-b];
            if(i>=c) z=dp[i-c];
            dp[i]=1+max(z,max(x,y));
        }
        cout<<dp[n]<<nl;


}
