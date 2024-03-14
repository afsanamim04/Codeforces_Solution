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
    string a;
    cin>>a;
    if(n%2==0)
    {
        for(int i=0; i<n-2; i+=2)
        {
           cout<<a[i]<<a[i+1]<<'-';
        }
        cout<<a[n-2]<<a[n-1]<<nl;
    }
    else
    {
        for(int i=0; i<n-3; i+=2)
        {
           cout<<a[i]<<a[i+1]<<'-';
        }
        cout<<a[n-3]<<a[n-2]<<a[n-1]<<nl;
    }

}
