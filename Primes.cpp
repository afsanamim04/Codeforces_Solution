#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    //ll t;
   // cin>>t;
    //while(t--)
    //{
        ll n;
        cin>>n;
        vector<ll>v(n,0);
        v[0]=1;
        v[1]=1;
        for(ll i=2; i*i<=n; ++i)
        {
            if(v[i]==0)
            {
                for(ll j=i*i; j<=n; j+=i)
                {
                    v[j]=1;
                }
            }
        }
        vector<ll>v1;
        for(ll i=1; i<=n; ++i)
        {
            if(v[i]==0)
            {
                v1.push_back(i);
            }
        }

        ll x=v1.size();
        ll i=0, j=x-1;
        sort(v1.begin(),v1.end());
        ll sum=0;
        ll flg=0;
        while(i<j)
        {
            sum=v1[i]+ v1[j];
            if(n==sum)
            {
                cout<<v1[i]<<' '<<v1[j]<<nl;
                flg++;
                break;
            }
            else if(sum>n) j--;
            else i++;
        }
        if(flg==0)
            cout<<-1<<nl;
   // }
}
