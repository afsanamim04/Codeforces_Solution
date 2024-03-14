#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    string s;
    cin>>s;
    int z=0,o=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0') z++;
        else o++;
    }
    if(z==0 || o==0)
    {
        cout<<max(z,o)<<nl;
    }
    else if(z==o) cout<<0<<nl;
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                o--;
                if(o<0) break;
            }
            else
            {
                z--;
                if(z<0) break;
            }
        }
    cout<<max(z,o)<<nl;
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
