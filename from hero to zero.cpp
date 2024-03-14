#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    //ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t,n,k; cin>>t;
    while(t--)
    {
       cin>>n>>k;
        int cnt=0;
        while(n)
        {
            cnt+=(n%k);
            n=n-(n%k);

            if(n%k==0 && n!=0)
            {
                ++cnt;
                n=n/k;
            }
        }
        cout<<cnt<<nl;

    }
    return 0;
}
