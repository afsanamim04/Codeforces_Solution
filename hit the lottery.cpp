#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll n; cin>>n;
    ll cnt=0;
    cnt=n/100;
    ll m=n%100;
    cnt=cnt+m/20;
    ll p=m%20;
    cnt=cnt+p/10;
    ll q=p%10;
    cnt=cnt+q/5;
    ll r=q%5;
    cnt=cnt+r;
    cout<<cnt<<nl;
}
