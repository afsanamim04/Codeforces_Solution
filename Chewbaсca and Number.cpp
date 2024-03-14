#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    if(s[0]=='9') s1.push_back(s[0]);
    else
    {
        int a=min(s[0]-'0','9'-s[0]);
        s1.push_back('0'+a);
    }
    for(int i=1; i<s.size(); i++)
    {
       int a=min(s[i]-'0','9'-s[i]);
        s1.push_back('0'+a);
    }
    cout<<s1<<nl;
}
