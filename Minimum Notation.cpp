#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    string s;
    cin>>s;
    char mn='9';

    for(int i=s.size()-1; i>=0; i--)
    {
        mn=min(s[i],mn);
        if(s[i]!='9' and s[i]>mn)
        {
           s[i]++;
        }
    }
    sort(s.begin(),s.end());
    cout<<s<<nl;
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
