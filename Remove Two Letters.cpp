#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<int,string>st;
    for(int i=0; i<n-1; i++)
    {
        string a;
        a.push_back(s[i]);
        a.push_back(s[i+1]);
        //sort(a.begin(),a.end());
        st.insert({i,a});
        a.clear();
    }
    int l=st.size();
    vector<string>v;
    for(auto it: st) v.push_back(it.second);
   // for(auto it: v) cout<<it<<' '; cout<<nl;
    for(int i=0; i<st.size()-1; ++i)
    {

       reverse(v[i].begin(), v[i].end());
       if (v[i] == v[i + 1]) {
        l--;
       // cout<<l<<nl;

    }
    }
    cout<<l<<nl;
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
