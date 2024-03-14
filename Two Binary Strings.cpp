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
    int p,q;
    int ans=0;
    if(ans==0)
    {
        for(int i=0; i<l; i++)
        {
            if(s1[i]=='0' && s2[i]=='0')
            {
                s.push_back('z');
                p=i;
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
        str=s;
        s.erase(0,p+1);
        if(s[0]=='o')
        {
            cout<<"YES"<<nl;
            return;
        }
    }
    //else if(ans==0)
   // {
   for(int i=0; i<l; i++)
   {
       if(s1[i]=='1' && s2[i]=='1')
       {
           q=i;
           break;
       }
   }
   for(int i=0; i<l-1; i++)
        {
            if(str[i]=='z' && str[i+1]=='o')
            {
                cout<<"YES"<<nl;
                return;
            }
        }
   //cout<<str<<nl;
        str.erase(q,l);
       // cout<<str<<nl;
        if(str[str.size()-1]=='z') cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
   // }

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
