#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        set<ll>s;
        for(ll i=0; i<n; ++i)
        {
            ll j;
            cin>>j;
            v.push_back(j);
            s.insert(j);
        }
        if(s.size()==1) cout<<"YES"<<nl;
        else if( s.size()>2) cout<<"NO"<<nl;
        else
        {
            sort(v.begin(),v.end());
            int cnt=0,flg=0;
            for(ll i=0; i<n; ++i)
            {
                if(v[i]==v[0]) cnt++;
                else flg++;
            }
            if(n%2==0)
            {
                if(cnt==flg) cout<<"YES"<<nl;
                else cout<<"NO"<<nl;
            }
            else
            {
                if((abs(flg-cnt))==1) cout<<"YES"<<nl;
                else cout<<"NO"<<nl;
            }

        }
    }
}
