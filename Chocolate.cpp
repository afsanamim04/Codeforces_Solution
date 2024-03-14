#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
#define M_PI 3.14159265358979323846
const int M= 1e9+7;

void sol()
{
    int n;
    cin>>n;
    vector<bool>v;
    int p=0;
    for(int i=0; i<n; ++i)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    int cnt=0;
    for(int i=0; i<n; ++i)
    {
        if(v[i]==1)
        {
            p=i;
            cnt=1;
            break;
        }
    }
    if(cnt==0) cout<<0<<nl;
    else
    {
        long long  ans=1;
        for(int i=p+1; i<n; i++)
        {
            if(v[i]==1)
            {
                ans*=i-p;
                p=i;
            }
        }
        cout<<ans<<nl;
    }
}
int main()
{
    sol();
}
