#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    ll n,c;
    cin>>n>>c;
    priority_queue<ll>q;
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        q.push(-x-i);
    }
    int ans=0;
    while(!q.empty())
    {
        int x=-q.top();
        q.pop();
        if(x>c) break;
        ans++;
        c-=x;
    }
    cout<<ans<<"\n";
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
