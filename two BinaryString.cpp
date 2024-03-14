#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    string s1,s2,s,str;
    cin>>s1>>s2;
    int l=s1.size();
    for(int i=0; i<l; i++)
        {
            if(s1[i]=='0' && s2[i]=='0')
            {
                s.push_back('z');
            }
            else if(s1[i]=='1' && s2[i]=='1')
            {
                s.push_back('o');
            }
            else s.push_back('n');
        }
        for(int i=0; i<l-1; i++)
        {
            if(s[i]=='z' && s[i+1]=='o')
            {
                cout<<"YES"<<nl;
                return;
            }
        }
        cout<<"NO"<<nl;
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
