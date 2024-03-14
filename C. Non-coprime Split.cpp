#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    endl
#define pb    push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

ll  gcd(ll a, ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

bool prime(ll n)
{
    if(n<2) return false;
    if(n<=3) return true;
    if(n%2==0) return false;
    for(ll i=3; i*i<=n; i+=2)
    {
        if(n%i==0)return false;
    }
    return true;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        if((l==r)&&(prime(l)==true)&&( prime(r)==true))
            cout<<-1<<nl;
            else
            {
                vector<ll>v;
                if(l==1)
                {
                  for(ll i=2; i<r; ++i)
                {
                    v.pb(i);
                }
                }
                else{
                    for(ll i=2; i<l; ++i)
                {
                    v.pb(i);
                }
                }
                ll i=0,j=v.size()-1;
                ll flg=0;
                while(i<=j)
                {
                    if((v[i]+v[j]>=l) && (v[i]+v[j]<=r))
                    {
                        if(gcd(v[i],v[j])!=1)
                        {
                            cout<<v[i]<<' '<<v[j]<<nl;
                            flg++;
                            break;
                        }
                        else
                            j--;

                    }
                    else if(v[i]+v[j]<l)
                    {
                        i++;
                        j=v.size()-1;
                    }
                    else if(v[i]+v[j]>r)
                    {
                        j--;
                    }
                }
                if(flg==0)
                {
                    cout<<-1<<nl;
                }
            }

    }
}
