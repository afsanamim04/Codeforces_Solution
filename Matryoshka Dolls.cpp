#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int s,x,cnt=0,div=1;
    cin>>s>>x;
    div=s;
    while(div!=0)
    {
        div/=x;
        cnt++;
    }
    cout<<cnt<<endl;
}
