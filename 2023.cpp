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
        int n,k;
        cin>>n>>k;
        long long int mul=1;
        for(int i=0; i<n; i++)
        {
            int j;
            cin>>j;
            mul*=j;
        }
        if(mul>2023) cout<<"NO"<<nl;
        else if(2023%mul==0)
        {
            cout<<"YES"<<nl;
            for(int i=0; i<k-1; i++)
            {
                cout<<1<<' ';
            }
            cout<<2023/mul<<nl;
        }
        else cout<<"NO"<<nl;


    }
}
