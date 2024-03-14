#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int n,a,b;
    cin>>n>>a>>b;
    int x=n/b;
    int y=n%b;
    string s="abcdefghijklmnopqrstuvwxyz",str;
    for(int i=1; i<=x; i++)
    {
        for(int i=0; i<b; i++)
        {
            str+=s[i];
        }
    }
    for(int i=0; i<y; i++)
    {
        str+=s[i];
    }
    cout<<str<<endl;
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
