#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<pair<int,int>>v;
        for(int i=0; i<n; i++)
        {
            int j; cin>>j;
            v.push_back({j,i+1});
        }
        int c=0;
        sort(v.begin(),v.end());
        for(int i=n-1; i>0; --i)
        {
            if(v[i].second < v[i-1].second)
                c++;
        }
        cout<<c<<endl;
    }
}
