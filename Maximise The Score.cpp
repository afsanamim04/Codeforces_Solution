#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void solve()
{
    int n; cin>>n;
    vector<int>vc;
    for(int i=0; i<2*n; i++)
    {
        int j; cin>>j;
        vc.push_back(j);
    }
    sort(vc.begin(),vc.end());
    ll sum=0;
    for(int i=0; i<2*n; i+=2)
    {
        sum+=vc[i];
    }
    cout<<sum<<nl;
}
int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        solve();
    }
}
