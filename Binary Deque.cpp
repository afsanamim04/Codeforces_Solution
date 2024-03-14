#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n,sum,add=0;
    cin>>n>>sum;
    vector<bool>v;
    for(int i=0; i<n; i++)
    {
        bool x;
        cin>>x;
        v.push_back(x);
        add+=x;
    }
    if(add==sum)
    {
        cout<<0<<nl;
        return;
    }
    if(add<sum)
    {
        cout<<-1<<nl;
        return;
    }
    int cnt=0;
    int ans=0;
    int k;
    for(int i=0; i<n; i++)
    {
        ans+=v[i];
        cnt++;
        if(ans==sum)
        {
            k=i+1;
            break;
        }
    }
    int mx=cnt;
    int ind=0;
    for(int i=k; i<n; i++)
    {
        int j=i;
        while(j<n)
        {
            if(v[j]==1) break;
            cnt++;
             mx=max(mx,cnt);
            j++;
        }
        i=j;
        ans++;
        while(ind<n)
        {
            if(v[ind]==1)
            {
                ind++;
                break;
            }
            cnt--;
            ind++;
            mx=max(mx,cnt);
        }
    }
    cout<<n-mx<<nl;
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
