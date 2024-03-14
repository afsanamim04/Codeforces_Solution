#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll n,m;
    cin>>n>>m;
    if(n>m)
    {
        cout<<"No"<<nl;
        return;
    }
    if(m%2==1 && (n%2==0))
    {
        cout<<"No"<<nl;
        return;
    }
    if(n==1)
    {
        cout<<"Yes"<<nl;
        cout<<m<<nl;
        return;
    }
    cout<<"Yes"<<nl;
    if(n%2==0)
    {
        for(int i=0; i<n-2; i++)
        {
            cout<<1<<' ';
        }
        cout<<(m-(n-2))/2<<' ';
        cout<<(m-(n-2))/2<<nl;
    }
    else
    {
        for(int i=0; i<n-1; i++)
        {
            cout<<1<<' ';
        }
        cout<<(m-(n-1))<<nl;
    }
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
