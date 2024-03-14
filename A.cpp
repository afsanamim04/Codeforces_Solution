#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        int p;
        cin>>p;
        sum+=abs(p);
    }
    cout<<sum<<nl;
    }

}
