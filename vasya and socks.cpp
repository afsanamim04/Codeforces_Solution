#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
     ll n,m;
    cin>>n>>m;
    for(ll i=1; i*m<=n; i++) ++n;
        cout<<n<<nl;
        return 0;
}
