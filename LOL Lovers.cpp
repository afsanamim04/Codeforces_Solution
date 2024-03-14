#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int n; cin>>n;
    string str;
    cin>>str;
    if(str=="LOL" || str=="OLOL" || str=="OLO" || str=="LOLO" || str=="LOOL" || str=="OLLO") cout<<-1<<nl;
    else if(str=="OOL" || str=="LLO" || str=="LLOO" || str=="OOLL") cout<<2<<nl;
    else {int l=0, o=0;
    for(int i=0; i<n; ++i)
    {
        if(str[i]=='L') l++;
        else o++;
    }
    if(str[0]=='L' && l==2)
    {
        if(str[n-1]=='L') cout<<-1<<nl;
        else {
            cout<<n-1<<nl;
        }
    }
    else if(str[0]=='O' && o==2)
    {
      if(str[n-1]=='O') cout<<-1<<nl;
      else cout<<n-1<<nl;
    }
    else cout<<1<<nl;
    }

}
