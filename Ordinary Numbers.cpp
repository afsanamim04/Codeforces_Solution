#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    ll n; cin>>n;
    int i=0,m=n;
    int p;
    while(m!=0)
    {
        p=m%10;
        m/=10;
        i++;
    }
    if(i==1) cout<<n<<nl;
    else
    {
        int ans=0;
        for(int j=1; j<=i; j++)
        {
            ans=(ans*10)+p;
        }
       // cout<<ans<<nl;
        if(ans<=n) cout<<p+((i-1)*9)<<nl;
        else cout<<p-1+((i-1)*9)<<nl;
    }
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
