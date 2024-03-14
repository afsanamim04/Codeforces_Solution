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
        int n;
        cin>>n;
        vector<string>v(n);
        map<string,int>freq;
        for(int i=0; i<n; ++i) cin>>v[i];
        for(int i=0; i<n; ++i)
        {
            freq[v[i]]++;
        }
        string ans(n,'0');
        for(int i=0; i<n; i++)
        {
            if(v[i].size()==1) continue;
            for(int j=0; j<v[i].size()-2; j++)
            {
                string x="",y="";
                for(int k=0; k<=j; k++) x.push_back(v[i][k]);
                for(int k=j+1; k<=v[i].size()-1; k++) y.push_back(v[i][k]);
                if(x==y)
                {
                    if(freq[x]>0)
                    {
                        ans[i]='1';
                        break;
                    }
                }
                else
                {
                    if(freq[x]>0 && freq[y]>0)
                    {
                      ans[i]='1';
                      break;
                    }
                }
                if(ans[i]=='1') break;

            }

        }
        cout<<ans<<nl;
    }
}
