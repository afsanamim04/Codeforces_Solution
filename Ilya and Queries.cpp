#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>v;
    int cnt=0;
    v.push_back(0);
    for(int i=0; i<s.size()-1; i++)
    {
        if(s[i]==s[i+1])
           {
              cnt++;
              v.push_back(cnt);
           }
        else
        {
            v.push_back(cnt);
        }
    }
    for(auto it: v) cout<<it<<' '; cout<<nl;

    int m; cin>>m;
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        cout<<v[r-1]-v[l-1]<<nl;
    }
}
