#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll a,b; cin>>a>>b;
        ll m=1,p=0,cnt=0;
        if(a==b)
        {
            cnt=a+b;
        }
        if(a>b)
        {
            cnt=cnt+b;
            p=a/cnt;
            cnt=cnt+p;
        }
        if(a<b)
        {
            cnt=cnt+a;
            m++;
            cnt=cnt+(b-m);
        }
        cout<<cnt<<nl;
    }
    return 0;
}
