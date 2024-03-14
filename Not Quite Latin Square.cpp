#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    string str1,str2,str3;
    cin>>str1>>str2>>str3;
    string str=str1+str2+str3;
    int a=0;
    int b=0;
    int c=0;
    //cout<<str<<nl;
    for(int i=0; i<str.size(); ++i)
    {

        if(str[i]=='A')
        {
         a++;
        }
         if(str[i]=='B')
        {
            b++;
        }
         if(str[i]=='C') c++;
    }
    if(a==2) cout<<'A'<<nl;
    else if(b==2) cout<<'B'<<nl;
    else cout<<'C'<<nl;

}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        sol();
    }
}
