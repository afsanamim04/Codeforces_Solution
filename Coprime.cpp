#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int n; cin>>n;
    vector<int>v,sum;
    for(int i=0; i<n; i++)
    {
        int x; cin>>x;
        v.push_back(x);
    }
    for(int i=0; i<1001; i++)
    {
        for(int j=i; j<1001; j++)
        {
            if(__gcd(v[i],v[j])==1)
                sum.push_back(i+j+2);
        }
    }
    if(sum.size()==0) cout<<-1<<nl;
    else
    cout<<*max_element(sum.begin(),sum.end())<<nl;
}


int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
