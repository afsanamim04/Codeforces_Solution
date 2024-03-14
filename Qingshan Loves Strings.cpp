#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;


void sol()
{
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    int flg=0;
    for(int i=0; i<n-1; ++i)
    {
        if(s[i]==s[i+1])
        {
            flg=1;
            break;
        }
    }
    if(n==1) cout<<"YES"<<nl;
    else   if(flg==0) cout<<"YES"<<nl;
    else if(m==2) cout<<"NO"<<nl;
    else if(t[0]!=t[m-1]) cout<<"NO"<<nl;
    else
    {
        int cnt=0;
        for(int i=0; i<m-1; ++i)
        {
            if(t[i]==t[i+1])
            {
                cnt=1;
                break;
            }
        }
        if(cnt==1) cout<<"NO"<<nl;
        else
        {
            int cn=0;
            for(int i=0; i<n-1; i++)
            {
                if(s[i]==s[i+1])
                {
                    if(s[i]==t[0] || s[i+1]==t[m-1])
                    {
                        cn=1;
                        break;
                    }
                }

            }
            if(cn==1 ) cout<<"NO"<<nl;
            else cout<<"YES"<<nl;
        }
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
