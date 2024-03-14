#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>v,v1;
    for(int i=0; i<n; ++i)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    vector<pair<int,int>>v2;
    for(int i=0; i<n; i++)
    {
        if(v[i]%k==0) v2.push_back({k,-i});
        else
            v2.push_back({v[i]%k,-i});
    }
    sort(v2.begin(),v2.end());
    reverse(v2.begin(),v2.end());
    for(int i=0; i<v2.size(); i++)
    {
        cout<<(-1*v2[i].second)+1<<' ';
    }
    cout<<endl;

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
