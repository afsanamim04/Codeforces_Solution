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
    vector<int>v;
    for(int i=0; i<n; ++i)
    {
        int j; cin>>j; v.push_back(j);
    }
    int i=0,j=n-1;
    int a=0,b=0,sum1=0,sum2=0;
    while(i<=j)
    {
        if(sum1<=sum2)
        {
            sum1+=v[i];
            a++;
            i++;
        }
        else
        {
            sum2+=v[j];
            b++;
            j--;
        }
    }
    cout<<a<<' '<<b<<nl;
}
int main()
{
    sol();
}
