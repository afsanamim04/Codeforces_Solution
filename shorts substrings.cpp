#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        cout<<str[0];
        ll l=str.size();
        for(ll i=1; i<l-2; i+=2)
        {
            cout<<str[i];
        }
        cout<<str[l-1]<<nl;
    }
    return 0;
}
