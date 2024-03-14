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
    if(s[0]>s[1])
    cout<<((s[0]-'a')*25)+(s[1]-'a'+1)<<nl;
    else
     cout<<((s[0]-'a')*25)+(s[1]-'a')<<nl;
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
