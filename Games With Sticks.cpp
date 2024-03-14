#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n,m;
    cin>>n>>m;
    if(n<m)
    {
        if(n%2==0)
            cout<<"Malvika"<<nl;
        else
            cout<<"Akshat"<<nl;
    }
    else
    {
         if(m%2==0)
            cout<<"Malvika"<<nl;
        else
            cout<<"Akshat"<<nl;
    }
}
