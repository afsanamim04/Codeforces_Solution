#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{

    int t,n,c,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=1,flag=1;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            if(a[i]==a[i+1])
            {
                c++;
            }
            else
                c=1;
            if(c==3)
            {
                cout<<a[i]<<endl;
                flag=0;
                break;
            }
        }
        if(flag==1)
            cout<<-1<<endl;
    }
}
