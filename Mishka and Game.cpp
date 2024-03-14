#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,m,n;
    cin>>t;
    int sum1=0,sum2=0;
    while(t--)
    {
       cin>>m>>n;
      if(m>n)
        sum1++;
      if(m<n)
      sum2++;
    }
    //cout<<sum1<<' '<<sum2;
    if(sum1>sum2)
        cout<<"Mishka"<<endl;
    if(sum1<sum2)
        cout<<"Chris"<<endl;
    if(sum1==sum2)
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
