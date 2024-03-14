#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[m+5];
    for(int i=0; i<m+1; i++) cin>>a[i];
    int cnt=0,ans=0;
    for(int i=0; i<m; i++)
    {
        cnt=0;
        for(int j=0; j<n; j++)
        {
            if((a[i]>>j&1)!=(a[m]>>j&1))
                cnt++;
        }
        if(cnt<=k)
            ans++;
    }
    cout<<ans<<nl;
}
