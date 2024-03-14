#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n,t;
    cin>>n>>t;
    string str;
    cin>>str;
    ll i=1;
    while(i<=t)
    {
        ll j=0;
        while(str[j]!='\0')
        {
            if(str[j]=='B' && str[j+1]=='G')
            {
                str[j]='G';
                str[j+1]='B';
                j+=2;
            }
            else
                ++j;
        }
        ++i;
    }

    for(ll i=0; i<n; ++i) cout<<str[i];
    cout<<nl;
    return 0;
}
