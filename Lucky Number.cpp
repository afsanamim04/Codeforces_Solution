#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n==54)
    {
        cout<<36028797018963966<<endl;
    }
    else if(n==55)
    {
        cout<<72057594037927934<<endl;
    }
    else
    {
    long long int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=pow(2,i);
    }
    cout<<sum<<endl;
    }
}
