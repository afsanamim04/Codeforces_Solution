#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    char c;
    cin>>c;
    string str="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s,a;
    cin>>s;
    if(c=='R')
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<str.size(); j++)
            {
                if(s[i]==str[j])
                {
                  a.push_back(str[j-1]);
                }
            }

        }
    }
    else
    {
        for(int i=0; i<s.size(); i++)
        {
            for(int j=0; j<str.size(); j++)
            {
                if(s[i]==str[j])
                {
                  a.push_back(str[j+1]);
                }
            }

        }
    }
    for(auto it: a) cout<<it;
}
