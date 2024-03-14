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
        string str;
        cin>>str;
        ll c1=0,c2=0,c3=0;
        for(ll i=0; i<str.size(); ++i)
        {
            if(str[i]=='A') c1++;
            else if(str[i]=='B') c2++;
            else c3++;
        }
        if(c1+c3==c2) cout<<"YES"<<nl;
        else  cout<<"NO"<<nl;
    }

}
