#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n,k=0;
    // reading value of n from user
    cin >> n;
     if(n%4==0)
        {
                ll i,j;
                i=(n/4);
                j=sqrt(i);
                if(j*j==i)
               k=1;

        }
         if(n%2==0)
         {
                ll i,j;
                i=n/2;
                j=sqrt(i);
                if(j*j==i)
                k=1;


         }
             if(k==1)
                cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
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
