#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n; cin>>n;
    string s; cin>>s;
    int a=0,b=0;
    for(int i=0; i<n; ++i)
    {
        if(s[i]=='B'){a=i;break;}
    }
    for(int i=n-1; i>=0; --i)
    {
        if(s[i]=='B'){b=i; break;}
    }
   // cout<<a<<' '<<b<<nl;
    cout<<b-a+1<<nl;
}
int main()
{
    int t ; cin >>t;
    while(t--)
    {
        sol();
    }
}
