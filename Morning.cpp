#include<bits/stdc++.h>
using namespace std;

void sol()
{
    string s;
    cin>>s;
    vector<int>str;
    int sum=0;
    str.push_back(s[0]-48);
    str.push_back(s[1]-48);
    str.push_back(s[2]-48);
    str.push_back(s[3]-48);
    int p=1;
    //for(auto it: str) cout<<it<<' ';
    for(int i=0; i<4; ++i)
    {
        if(str[i]==0)
        {
            str[i]=10;
            sum+=abs(p-str[i]);
            p=str[i];
        }
        else
           {
               sum+=abs(p-str[i]);
               p=str[i];
           }
    }
    cout<<sum+4<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
         sol();
    }
}
