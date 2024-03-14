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
    string str;
    cin>>str;
    int cnt=0,ans=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='x')
        {
            cnt++;
        }
        else
        {
            if(cnt>=3) ans+=(cnt-2);
            cnt=0;
        }
    }
    if(cnt>=3) ans+=(cnt-2);
    cout<<ans<<nl;
}
