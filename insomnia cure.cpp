#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    ll cnt=0;
    for(ll i=1; i<=d; i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
         ++cnt;
    }
    cout<<cnt;
    return 0;
}
