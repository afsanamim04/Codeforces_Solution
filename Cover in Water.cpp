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
    string str;
    cin>>str;
    vector<int>v;
    int cnt=0,flg=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='.')
        {
            cnt++;
            flg++;
        }
        else
        {
            v.push_back(cnt);
            cnt=0;
        }
    }
    v.push_back(cnt);
    sort(v.begin(),v.end(),greater<int>());
    if(v[0]>=3) cout<<2<<nl;
    else cout<<flg<<nl;

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
