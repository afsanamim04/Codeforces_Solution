#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    string str;
    cin>>str;
    while(q--)
    {
        int a,b;
        cin>>a>>b;
        int ans=0;
        for(int i=a-1; i<=b-1; i++)
        {
            ans+=(str[i]-'a')+1;
        }
        cout<<ans<<nl;
    }
}
