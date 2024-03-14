#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector <int> v(n+5);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        long long int segsum=0;
        int sum=0,ans=n;
        for(int i=0; i<n; i++)
        {
            segsum+=v[i];
            sum=0;
            int len=0,mxln=i+1;
            bool pos=false;
            for(int j=i+1; j<n; j++)
            {
                sum+=v[j];
                if(sum>segsum)
                {
                    break;
                }
                if(j==n-1 && sum==segsum)
                {
                    pos=true;
                    mxln=max(mxln,len+1);
                    break;
                }
                len++;
                if(segsum==sum)
                {
                    mxln=max(mxln,len);
                    len=0;
                    sum=0;
                }
            }
            if(pos)
            {
                ans=min(ans,mxln);
            }
        }
        cout<<ans<<'\n';
    }

}
