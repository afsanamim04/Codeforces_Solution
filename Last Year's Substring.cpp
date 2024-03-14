#include<bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1;

        if(s1[0]=='2' && s1[1]=='0' && s1[2]=='2' && s1[3]=='0')
            cout<<"YES"<<endl;
        else if(s1[n-4]=='2'&& s1[n-3]=='0' && s1[n-2]=='2' &&  s1[n-1]=='0')
            cout<<"YES"<<endl;
        else if(s1[0]=='2' && s1[n-3]=='0' && s1[n-2]=='2' &&  s1[n-1]=='0')
            cout<<"YES"<<endl;
        else if(s1[0]=='2' && s1[1]=='0'  && s1[n-2]=='2' &&  s1[n-1]=='0')
            cout<<"YES"<<endl;
        else if  (s1[0]=='2' && s1[1]=='0' && s1[2]=='2'  &&  s1[n-1]=='0')
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;


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
