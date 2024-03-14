#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a1,b1,a2,b2;
        cin>>a1>>b1>>a2>>b2;
        ll flg=0;
        if(a1==a2)
        {
            if(b1+b2==a1)
            {
                cout<<"YES"<<nl;
                flg++;
            }


        }
        if(a1==b2)
        {
            if(b1+a2==a1)
            {
                cout<<"YES"<<nl;
                flg++;
            }

        }
        if(b1==a2)
        {
            if(a1+b2==b1)
            {
                cout<<"YES"<<nl;
                flg++;
            }


        }

        if(b1==b2)
        {
            if(a1+a2==b1)
            {
                cout<<"YES"<<nl;
                flg++;
            }

        }

        if(flg==0)
        cout<<"NO"<<nl;
}
}
