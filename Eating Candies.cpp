#include<bits/stdc++.h>
#define ll    long long int
#define nl    endl
#define pb    push_back
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v,v1;
        for(ll i=0; i<n; ++i)
        {
            ll j;
            cin>>j;
            v.push_back(j);
        }

        ll i=0,j=n-1;
        ll sum1=v[0],sum2=v[n-1],cnt=0;

        while(i<j)
        {
            if(sum1>sum2)
            {
                if(i==0 && j==n-1)
                    cnt+=2;
                    cnt++;
                j--;
                sum2+=v[j];
                if(sum1==sum2)
                {
                    v1.push_back(cnt);
                }

            }
            else if(sum1<sum2)
            {
                if(i==0 && j==n-1)
                    cnt+=2;
                    cnt++;
                i++;
                sum1+=v[i];
                if(sum1==sum2)
                {
                    v1.push_back(cnt);
                }

            }
            else
            {
                if(i==0 && j==n-1)
                {
                    cnt+=2;
                v1.push_back(cnt);
                }
                 if(((j-i<=2) && sum1==sum2))
                break;
                i++;
                j--;
                sum1+=v[i];
                sum2+=v[j];
                cnt+=2;
                if(sum1==sum2)
                {
                    v1.push_back(cnt);
                }

            }
        }
        if(v1.empty())
            cout<<0<<nl;
        else
            cout<<*max_element(v1.begin(),v1.end())<<nl;
    }
}
