#include<bits/stdc++.h>
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int i=1,j=n;
    while(i<j)
    {
        cout<<j<<' ';
        cout<<i<<' ';
        i++;
        j--;
    }
    if(n%2==1) cout<<(n/2)+1;
    cout<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        solve();
    }
}
