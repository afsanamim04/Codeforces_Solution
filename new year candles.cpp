#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll a,b;
    cin>>a>>b;
    ll sum=a,x;
    while(a/b>=1)
    {
        x=a%b;
        a=(a/b);
        sum+=a;
        a+=x;
    }
    cout<<sum<<nl;
    return 0;
}
