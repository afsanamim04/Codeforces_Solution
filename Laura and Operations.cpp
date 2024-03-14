#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void sol()
{
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v(3,0);

    if((c+b)%2==0) v[0]=1;
    if((c+a)%2==0) v[1]=1;
    if((a+b)%2==0) v[2]=1;
    for(auto it:v) cout<<it<<' ';
    cout<<nl;

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
