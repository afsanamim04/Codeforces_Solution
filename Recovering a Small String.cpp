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
    if(n<=28)
    {
        cout<<'a';
        cout<<'a';
        int p=n-2;
        cout<< static_cast<char>('a' + p - 1);
        cout<<nl;
    }
    else if(n>28 && n<=53)
    {
        cout<<'a';
        int p=n-27;
        cout<<static_cast<char>('a' + p - 1);
        cout<<'z';
        cout<<nl;
    }
    else if(n>=54)
    {
        int p=n-52;
        cout<<static_cast<char>('a' + p - 1);
        cout<<'z';
        cout<<'z';
        cout<<nl;
    }


}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        sol();
    }
}
