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
        vector<int>v,v1;
        for(int i=0; i<n; i++)
        {
            int j;
            cin>>j;
            v1.push_back(j);
            if(j!=1) v.push_back(j);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v.end());
        int j,sum=0;
        if(v[0]==1) j=2;
        else j=1;
        for(int i=0; i<v.size(); i++)
        {
            int x=v[i]-j;
            if(x<0)
            {
                x=0;
                j--;
            }

            sum+=x;
            j++;

        }
        cout<<sum<<endl;
    }
}
