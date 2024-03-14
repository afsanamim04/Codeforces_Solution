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
        ll n;
        cin>>n;
        string str,ss="",s="meow";
       cin>>str;
        transform(str.begin(),str.end(),str.begin(), :: tolower);
        ll cnt=0,flg=0,o=0,w=0,fal=0;
        for(ll i=0; i<n; i++)
        {

            if(ss.empty() or ss.back()!=str[i])
            {
               ss.push_back(str[i]);
            }
        }
        if( ss==s)
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
    return 0;
}
