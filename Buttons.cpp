#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int n; cin>>n;
    ll sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=(i*(n-i)+1);
    }
    cout<<sum<<nl;
}
