#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        for(int i=0; i<str.size(); i++)
        {

            if(str[i]=='b')
            {
                str.erase(str.begin()+i);

                for(int j=i-1; j>=0; j--)
                {
                    if(islower(str[j]))
                    {
                        str.erase(str.begin()+j);
                        i-=1;
                        break;
                    }
                }
                i--;


            }
            if(str[i]=='B')
            {
                str.erase(str.begin()+i);
                for(int j=i-1; j>=0; j--)
                {
                    if(isupper(str[j]))
                    {
                        str.erase(str.begin()+j);
                        i-=1;
                        break;
                    }
                }
                i--;

            }

        }
        cout<<str<<endl;
    }

}
