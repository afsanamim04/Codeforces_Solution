#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p,i,j;
        cin>>n;
        set<ll>s;
        for( i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                s.insert(i);
                p=n/i;
                break;
            }
        }
        for(j=i+1; j*j<=p; j++)
        {
            if(p%j==0)
            {
                s.insert(j);
                s.insert(p/j);
                break;
            }
        }


        if(s.size()==3)
        {
            cout<<"YES"<<nl;
            for(auto it: s) cout<<it<<' ';
            cout<<nl;
        }
        else
            cout<<"NO"<<nl;
            s.clear();
    }
    return 0;
}
