#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<int>v; int c=0;
        for(int i=0; i<n; ++i)
        {
            int j; cin>>j;
            if(j==0)c++;
            v.push_back(j);
        }
        if (c==n) cout<<0<<nl;
        else
        {
            int sum=0;
            for(int i=0; i<n; i++)
            {
               sum^=v[i];
            }
            if(sum==0){ cout<<1<<nl; cout<<1<<' '<<n<<nl;}
            else if(n%2==0)
            {
                cout<<2<<nl;
                cout<<1<<' '<<n<<nl;
                cout<<1<<' '<<n<<nl;
            }
            else if(n%2 !=0)
            {
                cout<<4<<nl;
                cout<<1<<' '<<n<<nl;
                cout<<1<<' '<<n-1<<nl;
                cout<<n-1<<' '<<n<<nl;
                cout<<n-1<<' '<<n<<nl;
            }
        }

    }
}
