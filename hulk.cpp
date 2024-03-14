#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll x;
    cin>>x;
    ll j=1,k=2,l=3,m=5;
    string str1="I",str2="hate",str3="that",str4="love",str5="it";
    for(ll i=1; i<(x*3); i++)
    {

        while(j==i)
        {
            cout<<str1<<' ';
            j+=3;
        }
        while(k==i)
        {
            cout<<str2<<' ';
            k+=6;
        }
        while(l==i)
        {
            cout<<str3<<' ';
            l+=3;
        }
        while(m==i)
        {
            cout<<str4<<' ';
            m+=6;
        }
    }
    cout<<str5<<nl;
    return 0;
}
