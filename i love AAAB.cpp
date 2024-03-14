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
        string str;
        cin>>str;
        ll l=str.size();
        ll ans=0;
        if(str[0]=='B' || str[l-1]=='A')
            cout<<"NO"<<nl;

        else
        {
            ll cnt=0,flg=0;
            for(ll i=0; i<l; ++i)
            {
                if(str[i]=='A')
                    cnt++;
                else
                    flg++;
                    if(flg>cnt)
                    {
                       ans=1;
                       break;
                    }
            }
            if(ans==1)
                cout<<"NO"<<nl;
            else
                cout<<"YES"<<nl;
        }

    }
}


