#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
       int n; cin>>n;
       int a=0,p=1,b=0;
       long long int mul=1;
       for(int i=0; i<n; i++)
       {
    long long int j; cin>>j;
         //  v.push_back(j);
           if(j==0) b=1;
           if(j<0) {a++; p=i+1; }
       }
       if(b==1 || (a%2)==1) cout<<0<<endl;
       else
       {
           cout<<1<<endl;
           cout<<p<<' '<<0<<endl;
       }


    }
}
