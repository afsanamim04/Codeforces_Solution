#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int a,b;
    cin>>a>>b;
    if(a>b)
    {
        int ans=max((2*b),a);
        cout<<ans*ans<<nl;
    }
    else
    {
        int ans=max((2*a),b);
        cout<<ans*ans<<nl;
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
