#include <iostream>
#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll l,r,x;
    cin >> l >> r >> x;
    ll a, b;
    cin >> a >> b;
    if(a==b)
    {
        cout<<0<<nl;
        return;
    }
    else if(abs(a-b)>=x)
    {
        cout<<1<<nl;
    }

    else
    {
        int t1=0,t2=0,th1=0,th2=0;
        if(abs(r-a)<x && abs(a-l)<x)
        {
            cout<<-1<<nl;
            return;
        }
        if(abs(r-a)>=x)
        {
            if(abs(r-b)>=x)
            {
                th1=2;
            }
            else
            {
                if((abs(l-r)>=x)&& (abs(l-b)>=x))
                {
                    th2=3;
                }
                else
                {
                    cout<<-1<<nl;
                    return;
                }
            }
        }

        if(abs(a-l)>=x)
        {
            if(abs(l-b)>=x)
            {
                t2=2;
            }
            else
            {
                if((abs(l-r)>=x)&& (abs(r-b)>=x))
                {
                    t1=3;
                }
                else
                {
                    cout<<-1<<nl;
                    return;
                }
            }
        }
     cout<<min(t1,min(t2,min(th1,th2))<<nl;
    }
    // return -1;
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
