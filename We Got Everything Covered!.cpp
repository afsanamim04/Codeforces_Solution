#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n,k;
    cin>>n>>k;
    string s="abcdefghijklmnopqrstuvwxyz",s1,s2;
    for(int i=0; i<k; i++)
    {
       s1.push_back(s[i]);
    }
    for(int i=0; i<n; i++)
    {
       s2+=s1;
    }
    cout<<s2<<nl;
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
