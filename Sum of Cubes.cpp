#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin>>x;
        bool cnt=true;
        if(x==1)
        {
            cout<<"NO"<<'\n';
        }
        else
        {
            unordered_set<long long>s;

            for(long long i=1; i*i*i<=1000000000000; i++)
            {
               s.insert(i*i*i);
            }
            for(long long i=1; (i * i * i) <= x; i++)
            {
                if(s.count(x-i*i*i))
                {
                    cout<<"YES"<<'\n';
                    cnt=false;
                    break;
                }

            }
            if(cnt) cout<<"NO"<<'\n';
        }
    }
}
