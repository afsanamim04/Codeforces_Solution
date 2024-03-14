#include<bits/stdc++.h>
#define ll long long int
#define nl endl
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,q;
        cin>>n>>a>>q;
        string str;
        cin>>str;
        ll cnt=0;
        ll x=a;
        ll p=0,m=0,f=0;
        if(n==a)
            cout<<"YES"<<nl;

        else
        {
            for(ll i=0; i<q; ++i)
            {
                if(str[i]=='+')
                {
                    p++;
                    {
                       x++;
                       if(n==x)
                       {
                           f=1;
                           cout<<"YES"<<nl;
                           break;
                       }
                    }
                }
                else
                {
                    x--;
                    m++;
                }



            }
            ll y=a+p;
            if(y<n)
                cout<<"NO"<<nl;
            else
            {
                if(f!=1)
                    cout<<"MAYBE"<<nl;
            }

        }
    }
}
