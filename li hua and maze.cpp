#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll r,c,x1,y1,x2,y2;
        ll ans1=0, ans2=0;
        cin>>r>>c;
        cin>>x1>>y1>>x2>>y2;
        if((x1==1 && y1==1) || (x1==1 && y1==c) || (x1==r && y1==c) || (x1==r && y1==1))
            cout<<'2'<<nl;
        else if((x2==1 && y2==1) || (x2==1 && y2==c) || (x2==r && y2==c) || (x2==r && y2==1))
            cout<<'2'<<nl;

 else if(x1==1 || y1==1 || x1==r || y1==c || x2==1 || y2==1 || x2==r || y2==c)
        {
            cout<<'3'<<nl;
        }
        else
        {
             cout<<'4'<<nl;
        }


    }
    return 0;
}
