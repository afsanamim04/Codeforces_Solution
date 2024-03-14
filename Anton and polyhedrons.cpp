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
    string str;
    ll sum =0;
    for(ll i=0; i<n; ++i)
    {
        cin>>str;
    if(str=="Tetrahedron") sum+=4;
    if(str=="Cube") sum+=6;
    if(str=="Octahedron") sum+=8;
    if(str=="Dodecahedron") sum+=12;
    if(str=="Icosahedron") sum+=20;
    }
    cout<<sum<<nl;
    return 0;
}
