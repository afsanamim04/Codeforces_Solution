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
    set<int>v1;
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        if(j<=n)
        v1.insert(j);

    }

    cout<<n-v1.size()<<nl;
}
int main()
{
    sol();
}
