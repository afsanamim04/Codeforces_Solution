#include<bits/stdc++.h>
#define ll long long int
#define nl endl
#define pb push_back
using namespace std;

int main()
{
    ll t; cin>>t;
    while(t--)
    {
        ll a,b,c,n;
        cin>>a>>b>>c>>n;
        vector<ll>v;
        v.pb(a);
        v.pb(b);
        v.pb(c);
        sort(v.begin(),v.end());
        ll sum=(v[2]-v[1])+(v[2]-v[0]);
        if(sum>n)
            cout<<"NO"<<nl;
        else
        {
            ll sub=n-sum;
            if(sub%3==0)
                cout<<"YES"<<nl;
            else
                cout<<"NO"<<endl;
        }
    }
}
