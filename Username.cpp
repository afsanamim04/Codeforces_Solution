#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    string str;
    cin>>str;
    int n=str.size();
    int p;
    for(int i=n-1; i>=0; i--)
    {
        if(str[i]>='1' && str[i]<='9')
        {
           p=i;
           break;
        }
    }
    for(int j=0; j<p; j++)
    {
        cout<<str[j];
    }
    cout<<nl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
