#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll n; cin>>n;
    vector<ll>v;
    for(ll i=0; i<n; ++i)
    {
       ll j; cin>>j;
       v.push_back(j);
    }
   // sort(v.begin(),v.end());
    ll sum1=0,sum2=0;
    ll i=0,j=n-1;
    while(i<j)
    {
        if(v[i]>v[j])
        {
            sum1+=v[j];
            i++;
            if(v[i]<v[j])
            {
                sum2+=v[j];
                j--;
            }
            else
            {
                sum2+=v[i];
                i++;
            }
        }
        else
        {
            sum1+=v[j];
            j--;
            if(v[i]<v[j])
            {
                sum2+=v[j];
                j--;
            }
            else
            {
                sum2+=v[i];
                i++;
            }
        }
    }
    cout<<sum1<<" "<<sum2<<nl;
    return 0;
}
