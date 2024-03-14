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
        int a,b,c;
        cin>>a>>b>>c;
        if(abs(a-b)==1) cout<<-1<<nl;
        else
        {
            int ans=abs(a-b);
            int p=max(a,b);
            int a=min(a,b);
            if(c>p)
            {
                q=c-ans;
                if(q>a && q<p) cout<<q<<nl;
                else cout<<-1<<nl;
            }
            else
            {
                q=c+ans;

            }
        }
    }
}
