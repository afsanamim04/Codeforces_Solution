#include<bits/stdc++.h>
using namespace std;

void sol()
{
    int n; cin>>n;
    vector<int>v,v1;
    for(int i=0; i<n; ++i)
    {
        int j; cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n-1; i++)
    {
        v1.push_back(v[i+1]-v[i]);
    }
    sort(v1.begin(),v1.end());
    cout<<v1[0]<<endl;
}
int main()
{
   int tc; cin>>tc;
   while(tc--)
   {
       sol();
   }
}
