#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int n;
    cin>>n;
    vector<int>v,v1;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<n; i++)
    {
        if(v[i]!=i)
        {
         v1.push_back(v[i]);
        }
    }
    int ans=(1 << 30) - 1;
    for(int i=0; i<v1.size(); i++)
    {
       ans=(ans&v1[i]);
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
