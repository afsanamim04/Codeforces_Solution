#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    ll t,a,b,cnt;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        cnt=0;
        while(a)
        {
            cnt+=(a%b);
            a=a-(a%b);

            if(a%b==0&&a!=0)
            {
                ++cnt;
                a=a/b;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
