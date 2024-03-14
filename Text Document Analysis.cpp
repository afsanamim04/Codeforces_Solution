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
    string str;
    cin>>str;
    vector<int>v;
    int cnt=0,c=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='(')
        {
            i++;
            while(str[i]!=')')
            {
                if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
                {
                    if(str[i+1]=='_' || str[i+1]==')')
                        c++;
                }
                i++;
            }
        }
        else
        {
            if(str[i]!='_')
            {
                cnt++;
            }
            else
            {
                if(cnt!=0)
                {
                    v.push_back(cnt);
                    cnt=0;
                }
            }
            if(str[i+1]=='(' && cnt!=0)
            {
                v.push_back(cnt);
                    cnt=0;
            }
        }
    }
    if(cnt!=0)
    {
        v.push_back(cnt);
        cnt=0;
    }
    if(v.size()==0)
        cout<<0<<' '<<c<<nl;
    else
        cout<<*max_element(v.begin(),v.end())<<' '<<c<<nl;


}
int main()
{
    sol();
}
