#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        for(int i=1; i<=k; i++)
        {
            cout<<i<<' ';
        }
        for(int i=n; i>k; i--)
        {
            cout<<i<<' ';
        }
        cout<<nl;
    }
}
