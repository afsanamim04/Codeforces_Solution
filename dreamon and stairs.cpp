#include<bits/stdc++.h>
#define PI        acos(-1.0)
#define all(x)    x.begin(),x.end()
#define nl        '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n,m;
    ll y,x;
    cin>>n>>m;
    if(n<m)
        cout<<-1<<nl;
    else
    {
        if(n%2==0)
        {
            x=(n/2);
            if(x%m==0)
                cout<<x<<nl;

            else
            {
                y=(x/m)+1;
                cout<<y*m<<nl;
            }
        }
        else
        {
            n=n+1;
            x=(n/2);
            if(x%m==0)
                cout<<x<<nl;

            else
            {
                y=(x/m)+1;
                cout<<y*m<<nl;
            }
        }
    }

    return 0;
}
