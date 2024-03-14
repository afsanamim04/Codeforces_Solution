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
    string c;
    int cnt=0;
    for(int i=0; i<n; ++i)
    {
        c+=s[i];
        if(i!=n-1)
        {
            if(c.find(s[i+1]) != string :: npos)
            {
                cnt=i+1;
                break;
            }
        }
        else
        {
            if(c.find(s[i]) != string :: npos)
            {
                cnt=i+1;
                break;
            }
        }
    }
    set<char>st;
    for(int i=cnt; i<n; ++i)
    {
        st.insert(s[i]);
    }
   // cout<<c<<nl;
    cout<<c.size()+st.size()<<nl;
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
