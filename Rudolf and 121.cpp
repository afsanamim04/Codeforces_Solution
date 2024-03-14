#include<bits/stdc++.h>
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
            int x; cin>>x;
            v.push_back(x);
        }
        int flg=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]%2==0 && v[i]!=0 && i!=n-1)
            {
                flg=1;
                break;
            }
        }
        if(flg==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
