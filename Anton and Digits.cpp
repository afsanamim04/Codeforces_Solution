#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int p = min(min(k5,k6),k2);
    int q=min(k2-p,k3);
   // cout<<p<<' '<<q<<nl;
    cout<<(p*256)+(q*32)<<nl;
}
int main()
{
    sol();
}
