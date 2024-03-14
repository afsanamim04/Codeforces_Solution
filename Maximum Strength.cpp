#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
#define nl   endl
#define pb   push_back
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        ll x=str1.size();
        ll y=str2.size();
        ll z=y-x;
        if(str1==str2) cout<<0<<nl;
        else
        {
            if(str1.size()<str2.size())
            {
                for(ll i=0; i<z; i++)
                {
                    str1.insert(str1.begin()+i, '0');
                }
            }
            ll cnt=0;
            for(ll i=0; i<y; i++)
            {
                if(str1[i]!=str2[i]){
                    cnt++;
                    break;
                }
                else cnt++;
            }
            ll sum=0;
            ll p= (y-cnt)*9;
            for(ll i=0; i<cnt; ++i)
            {
                sum+=(abs(str1[i]-str2[i]));
            }
            cout<<sum+p<<nl;
        }

    }
}
