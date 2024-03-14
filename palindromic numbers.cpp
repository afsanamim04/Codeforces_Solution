#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans;
        if(s[0]!='9')
        {
            for(int i=0; i<n; i++)
            {
                int x=s[i]-'0';
                int y=9-x;
                ans+=(y+'0');
            }
        }
        else
        {
            int c=0;
            for(int i=n; i>=0; i--)
            {

                    int x=s[i]-'0';
                    x+=c;
                    if(x>1)
                    {
                        int y=11-x;
                        c=1;
                        ans+=(y+'0');
                    }
                    else
                    {
                        c=0;
                         int y=1-x;
                        ans+=(y+'0');
                    }
                }

                reverse(ans.begin(),ans.end());
        }
            for(ll i=0; i<n; i++)
            {
                cout<<ans[i];
            }
            cout<<nl;
        }
    }

