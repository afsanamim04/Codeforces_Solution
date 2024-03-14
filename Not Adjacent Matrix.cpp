#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n; cin>>n;
        if(n==2) cout<<-1<<nl;
        else
        {
            int j=0;
            for(int i=1; i<=n*n; i+=2)
            {
                cout<<i<<' ';
                j++;
                if(j==n)
                {
                    cout<<nl; j=0;
                }
            }
            //j=0;
            for(int i=2; i<=n*n; i+=2)
            {
                cout<<i<<' ';
               j++;
                if(j==n)
                {
                    cout<<nl; j=0;
                }

            }
        }
    }
}
