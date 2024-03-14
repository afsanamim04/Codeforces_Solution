#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    string str;
    cin>>str;
    int ans=0,a=0,b=0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='(') a++;
        else if(str[i]==')' && a!=0) b++;
        if(a!=0 && b!=0)
        {
            a-=1;
            b-=1;
            ans+=2;
        }
    }
      cout<<ans<<nl;
}
