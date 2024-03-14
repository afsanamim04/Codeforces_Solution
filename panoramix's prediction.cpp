#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    vector<int>v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(11);
    v.push_back(13);
    v.push_back(17);
    v.push_back(19);
    v.push_back(23);
    v.push_back(29);
    v.push_back(31);
    v.push_back(37);
    v.push_back(41);
    v.push_back(43);
    v.push_back(47);
     if(x==47)
     {
         cout<<"NO"<<endl;
         return 0;
     }

    for(int i=0; i<14; i++)
    {
        if(v[i]==x)
        {
            if(v[i+1]==y)
            {
                cout<<"YES"<<endl;
                return 0;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }


}
