#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="abc" || s=="acb" || s=="cba" || s=="bac")
            cout<<"YES"<<nl;
        else
            cout<<"NO"<<nl;
    }
}
