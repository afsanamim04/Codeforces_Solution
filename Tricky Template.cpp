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
    string a,b,c;
    cin>>a>>b>>c;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=c[i] && b[i] != c[i])
        {
            cnt=1;
            break;
        }
    }
    if(cnt==1) cout<<"YES"<<nl;
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
