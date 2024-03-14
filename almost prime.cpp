#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll>v(3000+5,0);
    ll cnt=0;
    ll c=0;
    for(ll i=1; i<=3000; i++)
    {
        for(ll j=1; j*j<=n; j++)
        {
            if(i%j==0)
            {
                ll x=j;
                ll y=i/j;
                ll fg=0,f=0;
                for(ll k=2,l=2; k*k<=x,l*l<=y; k++,l++)
                {
                    if(x%k==0)
                        fg++;
                        if(y%l==0)
                            ++f;
                }
                if(fg==0)
                    ++cnt;
                    if(f==0)
                        ++cnt;
            }
            if(cnt==2)++cnt;
            v[j]=cnt;
        }
    }
    cout<<v[n];

}
