#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0,c=0,flg=0,f=0,p;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0') cnt++;
            else
            {
                flg++;
                //if(flg==1) p=i;
            }
        }
        if(flg==n) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        /*if(cnt>flg) cout<<"YES"<<endl;
        else
        {
            for(int i=p; i<n-1; i++)
            {
                if(s[i]=='1' && s[i+1]=='1') f++;
                else if(s[i]=='0' && s[i+1]=='1') c++;
                else if(s[i]=='1' && s[i+1]=='0') c++;

            }
            if((flg+f)<(c+cnt)) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;*/



    }
}
