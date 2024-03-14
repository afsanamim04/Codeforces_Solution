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
    vector<ll>v,v1,v2;
    for(int i=0; i<n; ++i)
    {
        ll j;
        cin>>j;
        v.push_back(j);
        v1.push_back(j);
        v2.push_back(j);
    }
    sort(v1.begin(),v1.end());
    reverse(v2.begin(),v2.end());
    if(v2==v1)
    {
        cout<<"yes"<<nl;
        cout<<1<<' '<<n<<nl;
        return;
    }
    int flg=0,a=0,b=0;
    for(int i=0; i<n-1; i++)
    {
        if(v[i]>v[i+1])
        {
            flg=1;
            a=i;
            break;
        }
    }
    if(flg==1)
    {
        for(int i=a+1; i<n-1; i++)
        {
            if(v[i]<v[i+1])
            {
                b=i;
                break;
            }
            if((i+1==(n-1)) && b==0)
            {
              b=i+1;
            }
        }
    }
    //cout<<a<<' '<<b<<nl;
    reverse(v.begin()+a,v.begin()+b+1);
    //for(auto it: v) cout<<it<<' ';
    //cout<<nl;
    //for(auto it: v1) cout<<it<<' ';
    //cout<<nl;
    if(v==v1)
    {
        cout<<"yes"<<nl;
        cout<<a+1<<' '<<b+1<<nl;
    }
    else
        cout<<"no"<<nl;

}


int main()
{
    sol();
}
