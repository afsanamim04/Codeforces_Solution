#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    string s,a;
    cin>>s;
    int p;
    reverse(s.begin(), s.end());
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='0')
        {
           p=i;
           break;
        }
    }
    for(int i=p; i<s.size(); i++)
    {
        a.push_back(s[i]);
    }
    string b=a;
    reverse(a.begin(), a.end());
   //  cout<<a<<nl<<b<<nl;
    if(a==b) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
}
int main()
{
    sol();
}
