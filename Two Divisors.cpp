#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

void sol()
{
   ll a,b;
        cin>>a>>b;
        long long g = gcd(a,b);
        if(a*b/g==b)
        {
            for(int i=2; i*i<=b; i++)
            {
                if(i<=a && a%i==0)
                {
                    cout<<b*i<<nl;
                    return;
                }
                else if(b%i==0)
                {
                    cout<<b*i<<nl;
                    return;
                }
            }
            cout<<b*b<<nl;
        }
        else cout<<a*b/g<<nl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}
