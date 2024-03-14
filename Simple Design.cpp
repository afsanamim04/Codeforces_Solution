#include<bits/stdc++.h>
#define ll long long int
#define nl endl
using namespace std;

void sol()
{
 ll x,k;
 cin>>x>>k;
 for(int i=0; i<20; i++)
 {
     int sum=0;
     int p=x;
    while(p!=0)
    {
        sum+=p%10;
        p/=10;
    }
    if(sum%k==0)
    {
        cout<<x<<endl;
        break;
    }
    else x++;
 }
}

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        sol();
    }
}
