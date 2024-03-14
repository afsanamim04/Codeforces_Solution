#include<bits/stdc++.h>
using namespace std;

void sol()
{
    int n;
    cin>>n;
    string str;
    cin>>str;
    if (n==2) cout<<str;
    else
    {
        vector<string>v;
        for (int i = 0; i < str.length(); i++)
        {
            string subStr;
            for (int j = i; j < str.length(); j++)
            {
                subStr += str[j];
                if(subStr.size()==2)
                    v.push_back(subStr);
            }
        }
        sort(v.begin(), v.end());
        string str1=v[0];
        int cnt=1,p=0;
        //for(auto it: v) cout<<it<<' ';
        // cout<<endl;//<<v.size()<<endl;
        for(int i=0; i<v.size()-1; i++)
        {
            if(v[i]==v[i+1])
            {
                cnt++;
            }

            else
            {
                if(cnt>p){ str1=v[i];
                p=cnt;}
                cnt=1;
            }
            if((i+1)==v.size()-1)
            {
                if(cnt>p) str1=v[i];
            }
      // cout<<cnt<<endl;
        }
        cout<<str1<<endl;
    }
}
int main()
{
    sol();
}
