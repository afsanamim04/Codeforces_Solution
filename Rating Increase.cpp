#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    string str,s1,s2;
    cin>>str;
    int p;
    for(int i=1; i<str.size(); i++)
    {
        if(str[i]!='0')
        {
            p=i;
            break;
        }
    }
    for(int i=0; i<p; i++)
    {
        s1.push_back(str[i]);
    }
    for(int i=p; i<str.size(); i++)
    {
        s2.push_back(str[i]);
    }
    ll n1=stoi(s1);
    ll n2=stoi(s2);
    if(n1>=n2) cout<<-1<<nl;
    else cout<<s1<<' '<<s2<<nl;
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
