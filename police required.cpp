#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll>arr;
    for(int i=0; i<n; ++i)
    {
      int j;
      cin>>j;
      arr.push_back(j);
    }
    ll p=0,c=0;
    for(ll i=0; i<n; ++i)
    {
        if(arr[i]<0)
        {
            p=p+arr[i];
            if(p<0)
            {
                c++;
            }

        }
        if(arr[i]>0)
        {
            if(p<0) p=0;
            p=p+arr[i];
            if(p<0)
            {
                c++;
            }
        }

    }
    cout<<c<<nl;
    return 0;
}
