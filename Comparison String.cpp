#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string str;
        cin>>str;
        int cnt=0;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='<')
            {
                cnt++;
            }
            else
            {
               v.push_back(cnt);
               cnt=0;
            }
        }
        if(cnt!=0)
        v.push_back(cnt);
        cnt=0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='>')
            {
                cnt++;
            }
            else
            {
               v.push_back(cnt);
               cnt=0;
            }
        }
        if(cnt!=0)
        v.push_back(cnt);
        cout<<*max_element(v.begin(),v.end())+1<<nl;

    }
}
