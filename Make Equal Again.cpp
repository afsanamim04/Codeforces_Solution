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
    vector<int>v;
    set<int>s;
    for(int i=0; i<n; i++)
    {
        int j;
        cin>>j;
        v.push_back(j);
        s.insert(j);
    }
    if(s.size()==1)
    {
        cout<<0<<nl;
        return;
    }
    if(v[n-1]!=v[0])
    {
        int c=1,cnt=1;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]==v[i+1])
            {
                cnt++;
            }
            else break;
        }
        for(int i=n-1; i>0; i--)
        {
            if(v[i]==v[i-1])
            {
                c++;
            }
            else break;
        }
       // cout<<cnt<<' '<<c<<nl;
        cout<<n-max(cnt,c)<<nl;
    }
    else
    {
        int c=1,cnt=1;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]==v[i+1])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        for(int i=n-1; i>0; i--)
        {
            if(v[i]==v[i-1])
            {
                c++;
            }
            else break;
        }
      //  cout<<cnt<<' '<<c<<nl;
        cout<<n-(c+cnt)<<nl;
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
