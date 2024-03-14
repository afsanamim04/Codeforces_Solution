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
        ll n; cin>>n;
        string str; cin>>str;
        ll i=0, j=1;
            while(str[j]!='\0')
            {
                if(str[i]==str[j])
                {
                    cout<<str[i];
                    i=j+1;
                    j=i+1;
                }
                else
                {
                    j++;
                }
            }
            cout<<nl;

    }
}
