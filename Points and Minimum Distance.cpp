#include<bits/stdc++.h>
#define nl endl
using namespace std;

void sol()
{
    int n; cin>>n;
    vector<int>v;
    vector<pair<int,int>>vect;
    for(int i=0; i<n*2; ++i)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    int i=0,j=2*n-1;
    while(i<j)
    {
        vect.push_back(make_pair(v[i],v[j]));
        i++;
        j--;
    }
    int sum=0;
    for(int i=0; i<n-1; ++i)
    {
        sum+=abs(vect[i].first-vect[i+1].first);
        sum+=abs(vect[i].second-vect[i+1].second);
    }
    cout<<sum<<endl;
     for(int i=0; i<n; ++i)
    {
        cout<<vect[i].first<<' '<<vect[i].second<<endl;
    }
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        sol();
    }
}
