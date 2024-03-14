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
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    int cnt=1;
    for(int i=n-1; i>0; i--)
    {
        if(v[i]>v[i-1])
        {
            auto it =find(v.begin(), v.begin()+(i-1), v[i]);

            if (it != vec.end())
                cnt++;
            else break;
        }
    }

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
