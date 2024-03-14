#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v1,v2,v3;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        v1.push_back(x);
    }
    for(int i=0; i<n-1; i++)
    {
        ll x;
        cin>>x;
        v2.push_back(x);
    }
    for(int i=0; i<n-2; i++)
    {
        ll x;
        cin>>x;
        v3.push_back(x);
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());
    v2.push_back(-1);
    v3.push_back(-1);
    for(int i=0; i<n; i++)
    {

        if(v1[i]!=v2[i])
        {
            cout<<v1[i]<<'\n';
            break;
        }
    }
    for(int i=0; i<n-1; i++)
    {
        if(v2[i]!=v3[i])
        {
            cout<<v2[i]<<'\n';
            break;
        }
    }

}
