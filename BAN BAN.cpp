#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    int n;
    cin>>n;
    if(n%2==0)
    cout<<n/2<<nl;
    else cout<<(n/2)+1<<nl;
    int a=1,b=3*n;
    for(int i=0; i<n/2; i++)
    {
       cout<<a<<' '<<b<<nl;
       a+=3;
       b-=3;
    }
    if(n%2==1)
    {
        cout<<a<<' '<<b<<nl;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
