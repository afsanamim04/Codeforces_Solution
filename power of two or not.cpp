#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int n; cin>>n;
    int cnt=0;
    /*for(int i=0; i<32; i++)
    {
        if((n&1)!=0) cnt++;
        n=n>>i;
    }*/
    if(n&(n-1)==0)
        cout<<"n is a power of two\n";
    else
        cout<<"n is not a power of two\n";
}
