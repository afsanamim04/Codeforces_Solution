#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void sol()
{
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<0<<endl;
        return ;
    }
    if((n%6!=0) &&(n%3!=0))
    {
        cout<<-1<<endl;
        return ;
    }
    int cnt=0;
    while(n>1)
    {
        if(n%6==0)
        {
            n/=6;
            cnt++;
        }
        else if(n%3==0)
        {
            n=n*2;
            cnt++;
        }
        else
        {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<cnt<<endl;

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
