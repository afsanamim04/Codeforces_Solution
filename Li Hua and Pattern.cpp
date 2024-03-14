#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int v[n+2][n+2];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>v[i][j];
        }
    }
    ll cnt=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(v[i][j]!= v[n-1-i][n-1-j])
            cnt++;
        }
    }
    cnt/=2;
    if((k>=cnt) and ((n%2==1 or (cnt-k)%2==0)))
    {
        cout<<"YES"<<endl;
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
