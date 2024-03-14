#include<bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin>>n;
    vector<int>v(n+5);
    for(int i=0; i<n; ++i) cin>>v[i];
    int flg=0,cnt=0;
    for(int i=0; i<n-1; ++i)
    {
        if(v[i]>v[i+1])
        {
            if((i+1)==1 || (i+1)==2 || (i+1)==4 || (i+1)==8 || (i+1)==16){
                flg++;
            }
            cnt++;
        }
    }
    if(flg!=cnt) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        sol();
    }

}

