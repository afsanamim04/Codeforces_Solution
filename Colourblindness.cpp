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
        int n; cin>>n;
        string str1,str2;
        cin>>str1>>str2;
        for(int i=0; i<n; i++)
        {
            if(str1[i]=='G') str1[i]='B';
             if(str2[i]=='G') str2[i]='B';
        }
     //   cout<<str1<<' '<<str2<<endl;
        if(str1==str2) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
}
