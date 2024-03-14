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

        ll n,l,r;
        cin>>n>>l>>r;
        set<ll>s;
        ll flg=0;
        if(l==1) l=2;
        for(ll i=l; i*i<=n; i++)
        {
            if(n%i==0)
            {
                ll x=i;
                ll y=n/i;
                // s.insert(x);
                //s.insert(y);

                for(ll j=l; j*j<=y; j++)
                {
                    if(y%j==0)
                    {
                        s.insert(x);
                        s.insert(j);
                        s.insert(y/j);
                        if(s.size()==3)
                        {
                            for(auto it: s){cout<<it<<' ';}
                            //cout<<s[0]<<' '<<s[1]<<' '<<s[2];
                            cout<<nl;
                            flg++;
                        }
                    }
                    if(flg!=0)
                    {
                        break;
                    }
                   // s.clear();

                }
               // s.clear();
            }
            if(flg==0)
                cout<<-1<<nl;
                s.erase();

        }
    }
}

