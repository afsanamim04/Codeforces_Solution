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
    vector<int>v,v1(30,0);
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        v.push_back(j);
    }
    for(int i=0; i<n; i++)
    {
       for(int j=1; j<=26; j++)
       {
           if(v[i]==v1[j])
           {
               char ch = j +'a'-1;
               cout<<ch;
               v1[j]++;
               break;
           }
       }
    }
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
