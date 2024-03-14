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
    for(int i=0; i<n; i++)
        cin>>v[i];
    vector<int>position(n+5,0);
    for(int i=1; i<n; i++)
    {
        if(v[i]!=v[i-1])
        {
            int k=i-1;
            while(position[k]==0)
            {
                position[k]=i+1;
                k--;
            }
        }
    }
    position[n-1] =-1;
    int q;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        if(position[x-1]<=y && position[x-1]!=0)
            cout<< x<<' '<< position[x-1]<<endl;
        else cout<<-1<<' '<<-1<<endl;

    }
    cout<<endl;
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
