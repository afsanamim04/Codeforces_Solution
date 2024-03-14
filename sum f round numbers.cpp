#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,count=0;
       cin>>n;
       vector<int>v;
       if(n%10!=0)
       {
           v.push_back(n%10);
       }
           int ans=n%10;
           n-=ans;
       if(n%100!=0)
       {
           v.push_back(n%100);
       }
           ans=n%100;
           n-=ans;
       if(n%1000!=0)
       {
           v.push_back(n%1000);
       }
           ans=n%1000;
           n-=ans;
       if(n%10000!=0)
       {
           v.push_back(n%10000);
       }
           ans=n%10000;
           n-=ans;
           if(n>=10000 && n%10000==0)
           {
               v.push_back(n);
           }
           cout<<v.size()<<endl;
           for(int j=0;j<v.size();j++)
           {
               cout<<v[j]<<' ';
           }
           cout<<endl;
    }

    return 0;
}
