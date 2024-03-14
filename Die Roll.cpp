#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int y,w; cin>>y>>w;
    int ans=7-max(y,w);
    if(ans==1) cout<<1<<"/"<<6<<nl;
    else if(ans==2) cout<<1<<"/"<<3<<nl;
    else if(ans==3) cout<<1<<"/"<<2<<nl;
    else if(ans==4) cout<<2<<"/"<<3<<nl;
    else if(ans==5) cout<<5<<"/"<<6<<nl;
    else cout<<1<<"/"<<1<<nl;

}
