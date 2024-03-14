#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<ll>v;
        for(ll i=1; i*i<=n; ++i)
        {
            if(n%i==0)
            {
                v.push_back(i);
                v.push_back(n);
            }
        }
        sort(v.begin(),v.end());
        if(n%2==0)
        {
            cout<<n+(k*2)<<nl;;
        }
        else
        {
            cout<<(n+v[1]+(k-1)*2)<<nl; ;
        }
    }
   // cout<<n<<nl;
    return 0;
}
