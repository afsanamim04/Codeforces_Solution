#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
auto acomparator = [](const auto& lhs, const auto& rhs)
{
    return lhs.second < rhs.second;
};
auto dcomparator = [](const auto& lhs, const auto& rhs)
{
    return lhs.second > rhs.second;
};

void sol()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v,v1,v2,v3;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(v[i].first==1)
        {
            v1.push_back(make_pair(v[i].first,v[i].second));
        }
        else if(v[i].first==2)
        {
            v2.push_back(make_pair(v[i].first,v[i].second));
        }
        else
        {
            v3.push_back(make_pair(v[i].first,v[i].second));
        }

    }
    sort(v1.begin(), v1.end(), dcomparator);
    sort(v2.begin(), v2.end(), acomparator);
    int p= v1[0].second;
    int q=v2[0].second;
    if(v1[0].second> v2[0].second) cout<<0<<nl;
    else
    {
        int l = q-(p-1);
        for(int i=0; i<v3.size(); i++)
        {
            if(v3[i].second>=p && v3[i].second<=q)
                l--;
        }
        cout<<l<<nl;
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
