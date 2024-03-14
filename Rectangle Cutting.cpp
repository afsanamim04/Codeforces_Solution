#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll a,b;
    cin>>a>>b;
    if((a%2 == 0) && (b%2==0))
    {
        if(a/2!=b)
        {
            cout<<"YES"<<nl;
            return;
        }
        else
        {
            if(b/2!=a)
            {
                cout<<"YES"<<nl;
                return;
            }
            else
            {
                cout<<"NO"<<nl;
                return;
            }
        }
    }
    else if(a%2==0 && b%2!=0)
    {
       if(a/2!=b)
        {
            cout<<"YES"<<nl;
            return;
        }
        else
            {
                cout<<"NO"<<nl;
                return;
            }
    }
    else if(b%2==0 && a%2!=0)
    {
        if(b/2!=a)
            {
                cout<<"YES"<<nl;
                return;
            }
            else
            {
                cout<<"NO"<<nl;
                return;
            }
    }
    else cout<<"NO"<<nl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
