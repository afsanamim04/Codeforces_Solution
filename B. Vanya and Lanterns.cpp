#include<bits/stdc++.h>
#define nl '\n'
#define ll long long int
using namespace std;
int main()
{
    int n,l;
    cin>>n>>l;
    vector<ll>v;
    vector<double>v1;
    for(int i=0; i<n; ++i)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    };
    sort(v.begin(), v.end());
    v1.push_back(v[0]*2);
    for(int i=1; i<n; ++i)
    {
        v1.push_back(v[i]-v[i-1]);
    }
    v1.push_back((l-v[n-1])*2);
    double p=*max_element(v1.begin(),v1.end());
    double ans=p/2;
    printf("%.10lf\n",ans);

}
