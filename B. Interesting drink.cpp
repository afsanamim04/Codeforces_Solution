#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0; i<n; ++i)
    {
        ll j;
        cin>>j;
        v.pb(j);
    }
    sort(v.begin(),v.end());
    ll q;
    cin>>q;
    while(q--)
    {
        ll mi;
        cin>>mi;
        ll l=0,r=n-1;
        ll cnt=0;
        if(v[0]>mi) cout<<0<<nl;
        else if(v[n-1]<mi) cout<<n<<nl;
        else
        {
            while(l<=r)
            {
                ll mid=(l+r)/2;

                if(l==r && v[mid]==mi)
                {
                    cnt=mid+1;
                    break;
                }

                if(v[mid]==mi && v[mid-1]<mi && v[mid+1]>mi)
                {
                    cnt=(mid+1);
                    break;
                }
                else if(v[mid]==mi && v[mid-1]<mi && v[mid]==v[mid+1])
                {
                    l=mid+1;
                }
                else if(v[mid]==mi && v[mid-1]==mi && v[mid]==v[mid+1])
                {
                    l=mid+1;
                }

                else if(v[mid]==mi && v[mid-1]==mi && v[mid+1]>mi)
                {
                    cnt=mid+1;
                    break;
                }
                else if(v[mid]>mi && v[mid-1]<mi)
                {
                    cnt=mid;
                    break;
                }
                else if(v[mid]>mi && v[mid-1]>mi)
                {
                    r=mid-1;
                }
                else if(v[mid]<mi )
                {
                    l=mid+1;
                }
                else if(v[mid]>mi && v[mid-1]>=mi)
                {
                    r=mid-1;
                }
                if((v[mid]==mi) && (mid==0 || mid==(n-1)))
                {
                    cnt=mid+1;
                    break;
                }

            }
            cout<<cnt<<nl;
        }
    }

}
int main()
{
    sol();
}
