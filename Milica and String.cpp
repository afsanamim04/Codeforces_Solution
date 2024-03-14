#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n,k,cnt=0;
    cin>>n>>k;
    string s; cin>>s;
    for(int i=0; i<n; i++) {if(s[i]=='B') cnt++; }
    if(cnt==k) cout<<0<<nl;
    else if(cnt>k)
    {
        int flg=0;
        for(int i=n-1; i>=0; --i)
        {
            if(s[i]=='B')
            {
                flg++;
                if(flg>k)
                {
                    cout<<1<<nl;
                    cout<<i+1<<' '<<"A"<<nl;
                    break;
                }
            }
        }
    }
    else
    {
        int ans=k-cnt,p=0;
        cout<<1<<nl;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='A')
            {
                p++;
                if(p==ans)
                {
                    cout<<i+1<<' '<<'B'<<nl;
                }
            }
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
