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
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int j;
            cin>>j;
            v.push_back(j);
        }
        int cnt=0,a,b;
        while(v.size()!=0)
        {
            int i=0;
            int flg=0,j;
            for( j=i+1; j<v.size(); j++)
            {
                if((v[i]^v[j])!=0)
                {
                    a=j;
                    flg=1;
                    cnt++;
                    break;
                }
            }
            if(flg==0)
            {
                v.erase(v.begin()+i);
                cnt++;
            }
            else
            {
                v.erase(v.begin()+i);
                j--;
                v.erase(v.begin()+j);
                cnt++;

            }
            for(auto it: v)  cout<<it<<' '; cout<<nl;
        }
        cout<<cnt<<nl;
    }
}
