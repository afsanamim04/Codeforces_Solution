#include<bits/stdc++.h>
#define nl endl
#define pb push_back
#define ll long long
using namespace std;

void sol()
{
    int n;
    cin>>n;
    vector<int>v,v1,b1;
    set<int>st;
    for(int i=0; i<n; ++i)
    {
        int j;
        cin>>j;
        v.pb(j);
        st.insert(j);
    }
    if(st.size()<2 || st.size()>(n-2))
    {
        cout<<-1<<nl;
        return;
    }
    int a,b,c,d;
    for(int i=0; i<n; i++)
    {
       for(int j=i+1; j<n; j++)
       {
           if(v[i]==v[j])
           {
               v1.push_back(i);
               v1.push_back(j);
               break;
           }
           if(v1.size()==4) break;
       }
    }
    for(int i=0; i<n; i++) b1.push_back(1);
    b1[v1[0]]=1;
    b1[v1[1]]=2;
    b1[v1[2]]=2;
    b1[v1[3]]=3;
    for(auto it: b1) cout<<it<<' ';
    cout<<nl;
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

