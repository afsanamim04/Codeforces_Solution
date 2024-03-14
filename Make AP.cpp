#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(abs(a-b)==abs(b-c)) cout<<"YES"<<nl;
    else
    {
       if(a!=b && b!=c && a!=c)
       {
          ll p=min(a,min(b,c));
          if(p==a)
          {
              if(b%a!=0 || c%a!=0)
                cout<<"NO"<<nl;
              else cout<<"YES"<<nl;
          }
          else if(p==b)
          {
              if(a%b!=0 || c%b!=0)
                cout<<"NO"<<nl;
              else cout<<"YES"<<nl;
          }
          else if(p==c)
          {
              if(a%c!=0 || b%c!=0)
                cout<<"NO"<<nl;
              else cout<<"YES"<<nl;
          }
       }
       else if(a==b && b!=c)
       {
           if(a==1 && b==1 && c>2) cout<<"YES"<<nl;
           else if(a==1 && b==1 && c<=2)cout<<"NO"<<nl;
          else  if(a<c)
           {
               if(a*3==c) cout<<"YES"<<nl;
               else cout<<"NO"<<nl;
           }
           else if(c<a)
           {
               if(a%c==0) cout<<"YES"<<nl;
               else cout<<"NO"<<nl;
           }
       }
       else if(a!=b && b==c)
       {
           if(b==1 && c==1 && a>2) cout<<"YES"<<nl;
           else if(b==1 && c==1 && a<=2)cout<<"NO"<<nl;
          else if(a>b)
           {
               if(b*3==a) cout<<"YES"<<nl;
               else cout<<"NO"<<nl;
           }
           else
           {
               if(b%a==0) cout<<"YES"<<nl;
               else cout<<"NO"<<nl;
           }
       }
       else if(a==c && b!=a)
       {
           if(b>a)
           {
               if(b%a==0) cout<<"YES"<<nl;
               else cout<<"NO"<<nl;
           }
           else
           {
               if(a%b==0) cout<<"YES"<<nl;
               else cout<<"NO"<<nl;
           }
       }
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        sol();
    }
}
