#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n; cin>>n;
    set<int>st;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int a=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
                a++;
        }
        if(a!=0)
        st.insert(a);
    }
    //for(auto it: st) cout<<it<<' ';
    if(st.size()==1) cout<<"SQUARE"<<nl;
    else cout<<"TRIANGLE"<<nl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
