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
    int i=0;
    if(n<=3) cout<<str;
    else
    {
        while(i<=str.size())
        {
            if(str[i+3]=='a' || str[i+3]=='e')
            {
                cout<<str[i]<<str[i+1]<<'.';
                i+=2;
            }
            else
            {
                cout<<str[i]<<str[i+1]<<str[i+2]<<'.';
                i+=3;
            }
            if((i+2)==(n) )
            {
                cout<<str[i]<<str[i+1];
               break;
            }
            else if((i+3)==(n) )
            {
                cout<<str[i]<<str[i+1]<<str[i+2];
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
