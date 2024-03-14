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
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int flg=0;
    for(int i=1; i<n-1; i++)
    {
        if(v[i-1]==v[i+1] && (v[i-1]!=1))
        {
            flg=1;
            break;
        }
    }
    if(flg==1) cout<<"NO"<<nl;
    else cout<<"YES"<<nl;
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
