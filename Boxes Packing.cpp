#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int n; cin>>n;
    set<ll>s;
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        s.insert(j);
    }
    cout<<n-s.size()+1<<nl;
}
