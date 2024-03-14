#include<bits/stdc++.h>
using namespace std;
void sol()
{
    long long n;
    cin>>n;
    long long x,y;
    cin>>x>>y;
    vector<long long>v;
    for(long long i=0; i<n; i++)
    {
        long long a;
        cin>>a;
        v.push_back(a);
    }
    long long cnt=0;
    map<pair<long long,long long>,long long>mp;
    for(long long i=0; i<n; i++)
    {
        long long tx=v[i]%x;
        long long ty=v[i]%y;
        cnt+=mp[{(x-tx)%x,ty}];
        mp[{tx,ty}]++;
    }
    cout<<cnt<<'\n';
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
