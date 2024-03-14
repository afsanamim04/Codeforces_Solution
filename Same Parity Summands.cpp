#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    ll n;
    cin>>n;
    int k;
    cin>>k;
    if(n%2==1 && k%2==0)
    {
        cout<<"NO"<<nl;
        return;
    }
    if(n<k)
    {
        cout<<"NO"<<nl;
        return;
    }
    if((n%2==1 && k%2==1) || (n%2==0 && k%2==0))
    {
        if(n-(k-1)*1<=0)
        {
            cout<<"NO"<<nl;
            return;
        }
        cout<<"YES"<<nl;
        int sum=0;
        for(int i=0; i<k-1; i++)
        {
            cout<<1<<' ';
            sum+=1;
        }
        cout<<n-(k-1)*1;
    }
    else
    {
        if(n-(k-1)*2<=0)
        {
            cout<<"NO"<<nl;
            return;
        }
        cout<<"YES"<<nl;
        int sum=0;
        for(int i=0; i<k-1; i++)
        {
            cout<<2<<' ';
            sum+=2;
        }
        cout<<n-(k-1)*2;
    }
    cout<<nl;
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
