#include<bits/stdc++.h>
#define PI        acos(-1.0)
#define all(x)    x.begin(),x.end()
#define nl        '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    string str;
    cin>>str;
    ll i=0;
    while(i<str.size())
    {
        if(str[i]=='W' && str[i+1]=='U' && str[i+2]=='B')
        {
            i+=3;
            cout<<' ';
        }
        else
        {

            cout<<str[i];
             ++i;
        }

    }
}
