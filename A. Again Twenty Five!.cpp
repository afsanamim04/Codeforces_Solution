#include<bits/stdc++.h>
using namespace std;
int main()
{
    int base=5,pow,res=1,mod=100;
        cin>>pow;
        while(pow)
        {
            if(pow%2==1)
            {
              res=(res*base)%mod;
              pow--;
            }
            else
            {
                base=(base*base)%mod;
                pow/=2;
            }
        }
        cout<<res<<endl;
}
