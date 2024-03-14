#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v,v1,v2,v3;
    for(int i=0; i<n; ++i)
    {
        int j;
        cin>>j;
        v.push_back(j);
    }
    int a=0,b=0,c=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            a++;
            v1.push_back(i+1);
        }
        else if(v[i]==2)
        {
            b++;
            v2.push_back(i+1);
        }
        else
        {
            c++;
            v3.push_back(i+1);
        }
    }
    if(a==0 || b==0 || c==0)
    {
        cout<<0<<nl;
        return 0;
    }
    else
    {
        int ans = min(a,min(b,c));
        cout<<ans<<nl;
        for(int i=0; i<ans; i++)
        {
            cout<<v1[i]<<' '<<v2[i]<<' '<<v3[i]<<nl;
        }
    }

}
