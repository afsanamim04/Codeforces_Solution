#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]+k<=5)
         cnt++;
    }
    cout<<cnt/3<<endl;
   // else cout<<0<<endl;
}
int main()
{
    sol();
}
