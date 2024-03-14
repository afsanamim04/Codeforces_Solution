#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
/*int cntDistinct(string str)
{
    unordered_set<char> s;
    for (int i = 0; i < str.size(); i++) {
        s.insert(str[i]);
    }
    return s.size();
}*/
void sol()
{
    string s,t;
    cin>>s>>t;
    //sort(t.begin(),t.end());
    //if(cntDistinct(t)==2 && t[0]=='a') cout<<2<<nl;
   // if(cntDistinct(t)==1 && t[0]=='a') cout<<1<<nl;
    //else if(cntDistinct(t)==1 && t[0]!='a') cout<<2<<nl;
    if(t.size()==1&& t[0]=='a') cout<<1<<nl;
    else if(t.size()==1 && t[0]!='a') cout<<2<<nl;
    else cout<<-1<<nl;

}
int main()
{
    int q; cin>>q;
    while(q--)
    {
       sol();
    }
}
