#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n;
    cin>>n;
    vector<int>v(n+5);
    for(int i=0; i<n; i++) cin>>v[i];
    int i=0, j=n-1;
    int mx=n,mn=1,p,q;
    while(i<j)
    {
        if(v[i]==mn)
        {
            mn++;
            i++;
        }
        if(v[i]==mx)
        {
            mx--;
            i++;
        }
        if(v[j]==mn)
        {
            mn++;
            j--;
        }
        if(v[j]==mx)
        {
            mx--;
            j--;
        }
        if(v[i]!=mn && v[i]!=mx && v[j]!=mn && v[j]!=mx)
        {
           cout<<i+1<<' '<<j+1<<nl;
            return;
        }
    }
    cout<<-1<<nl;
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
