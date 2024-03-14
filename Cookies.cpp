#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n,sum=0,a=0,b=0;cin>>n;
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        sum+=j;
        if(j%2==0) a++;
        else b++;
    }
    if(sum%2==0) cout<<a<<nl;
    else cout<<b<<nl;
}
int main()
{
    sol();
}
