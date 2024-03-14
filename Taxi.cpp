#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    vector<ll>v,v1,v2,v3,v4;
    ll c1=0,c2=0,c3=0,c4=0,cnt=0;
    for(ll i=0; i<n; i++)
    {
        ll j;
        cin>>j;
        v.push_back(j);
    }
    //sort(v.begin(),v.end());
    for(ll i=0; i<n; i++)
    {
        if(v[i]==1) c1++;
        else if(v[i]==2) c2++;
        else if(v[i]==3) c3++;
        else  c4++;
    }
   // cout<<c1<<nl<<c2<<nl<<c3<<nl<<c4<<nl;
    cnt+=c4;
    if(c3>=c1)
    {
        cnt+=c3;
        if(c2%2==0) cnt+=(c2/2);
        else cnt+=((c2/2)+1);
    }
    else
    {
        cnt+=c3;//5
        c1-=c3;//2

        if(c2%2==0)
        {
            cnt+=c2/2;
            if(c1%4==0) cnt+=(c1/4);
            else cnt+=((c1/4)+1);
        }
        else
        {
            cnt+=(c2/2);//7
            c1+=2;//2
            //cnt+=(c1/4)+(c1%4);
            if(c1%4==0) cnt+=(c1/4);
            else cnt+=((c1/4)+1);
        }

    }
    cout<<cnt<<nl;
}
