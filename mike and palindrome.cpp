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
    int l=str.size();
    int cnt=0;
    for(ll i=0,j=l-1; i<l/2,j>=(l/2); ++i,j--)
    {
        if(str[i]!=str[j]) ++cnt;
    }
   // cout<<cnt<<nl;
    if(l%2==1 && cnt==0 || cnt==1) cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    return 0;
}
