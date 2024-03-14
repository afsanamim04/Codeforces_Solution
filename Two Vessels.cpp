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
        ll a,b,c;
        cin>>a>>b>>c;
        ll i=1,mul=1;
        if(a==b) cout<<0<<nl;
        else if(a>b)
        {
            while(a)
            {
                ll sum1=0,sum2=0;
                mul=(c*i);
                sum1=b+mul;
                sum2=a-mul;
                if(sum1==sum2)
                {
                    cout<<i<<nl;
                    break;
                }
                else if(sum1>sum2)
                {
                    cout<<i<<nl;
                    break;
                }
                else
                    i++;

            }
        }
        else
        {
            while(b)
            {
                ll sum1=0,sum2=0;
                mul=(c*i);
                sum1=a+mul;
                sum2=b-mul;
                if(sum1==sum2)
                {
                    cout<<i<<nl;
                    break;
                }
                else if(sum1>sum2)
                {
                    cout<<i<<nl;
                    break;
                }
                else
                    i++;

            }
        }
    }

}
