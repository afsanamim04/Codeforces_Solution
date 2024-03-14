#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        if(str.size()==2 && str[0]=='(' && str[1]==')')
            cout<<"NO"<<nl;
        else
        {
            cout<<"YES"<<nl;
            string str2,str1;
            for(ll i=0; i<str.size(); i++)
            {
                str2+="()";
            }
            for(ll i=0; i<str.size(); i++)
            {
                str1+='(';
            }
            for(ll i=0; i<str.size(); i++)
            {
                str1+=')';
            }
            if(str1.find(str) != string::npos)
                cout<<str2<<endl;
            else
                cout<<str1<<endl;
        }

    }
}
