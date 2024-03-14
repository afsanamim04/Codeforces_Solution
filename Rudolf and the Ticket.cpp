#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int b,c,k;
    cin>>b>>c>>k;
    vector<int>v1,v2;
    for(int i=0; i<b; i++)
    {
        int x;
        cin>>x;
        v1.push_back(x);
    }
    sort(v1.begin(),v1.end());
    for(int i=0; i<c; i++)
    {
        int x;
        cin>>x;
        v2.push_back(x);
    }
    sort(v2.begin(),v2.end());
    int cnt=0;
    for(int i=0; i<b; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(v1[i]+v2[j]<=k)
                cnt++;
            else break;
        }
    }
    cout<<cnt<<endl;
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
