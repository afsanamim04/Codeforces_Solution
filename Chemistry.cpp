#include<bits/stdc++.h>
using namespace std;

void sol()
{
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    sort(str.begin(),str.end());
    int c=0,flg=1;
    for(int i=0; i<n-1; ++i)
    {
        if(str[i]!=str[i+1])
        {

            if(flg%2!=0) c++;
             if((i+2)==n) c++;
            flg=0;

        }
        flg++;

    }
   // cout<<c<<endl;
    if(k>=c || n==1 || (n-k)==1) cout<<"YES"<<endl;
    else
    {
        if((n-k)%2==0)
        {
            if(c<=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else
        {
            if((c-1)<=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
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
