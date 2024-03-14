#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
int main()
{
    int n;
    cin>>n;
    vector<ll>v;
    for(ll i=0; i<n; i++)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    ll cnt=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            ll num= v[i]+v[j];
             if (isPowerOfTwo(num))
             {
                cnt++;
             }
        }
    }
    cout<<cnt<<nl;

}
