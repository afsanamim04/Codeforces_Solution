#include<bits/stdc++.h>
using namespace std;
bool possible(long long mid, int n,vector<int>&v,long long c)
{
    long long total=0;
    for(int i=0; i<n; i++)
    {
        long long side=(2*mid+v[i]);
        long long area=side*side;
        total+=area;
        if(total>c) return false;
    }
    return true;
}
void sol()
{
    int n;
    cin>>n;
    long long c;
    cin>>c;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    long long lo=0,hi=1e10,ans;
    while(lo<=hi)
    {
        long long mid=(lo+hi)/2;
        if(possible(mid,n,v,c))
        {
          ans=mid;
          lo=mid+1;
        }
        else hi=mid-1;
    }
    cout<<ans<<'\n';

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
