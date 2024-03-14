#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    vector<int>v;
    for(int i=0; i<n; ++i)
    {
        int j; cin>>j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0; i<n-1; i++)
    {
        sum+=(v[n-1]-v[i]);
    }
    cout<<sum<<endl;
}
