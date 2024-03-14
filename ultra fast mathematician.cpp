#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    vector<ll>v3;

    for(ll i=0; i<s1.size(); i++)
    {
        if(s1[i]==s2[i])
        {
        v3.push_back(0);
        }
    else
    {
        v3.push_back(1);
    }
    }
    for(ll i=0; i<v3.size(); i++)
    {
        cout<<v3[i];
    }
    cout<<nl;
    return 0;
}
