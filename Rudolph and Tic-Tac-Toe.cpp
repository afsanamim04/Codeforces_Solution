#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t; cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        int flg=0;
        if((s1[0]!='.') && (s1=="XXX" || s1=="OOO" || s1=="+++"))
        {
            if(flg==0)
            {
                cout<<s1[0]<<endl;
            flg++;
            }

        }

         if((s2[0]!='.') &&(s2=="XXX" || s2=="OOO" || s2=="+++"))
        {
            if(flg==0)
            {
                cout<<s2[0]<<endl;
            flg++;
            }

        }

         if((s3[0]!='.') &&(s3=="XXX" || s3=="OOO" || s3=="+++"))
        {
            if(flg==0)
            {
                cout<<s3[0]<<endl;
            flg++;
            }

        }
         if((s1[0]==s2[0]) && (s1[0]==s3[0]))
        {
            if((s1[0]!='.') && (flg==0))
            {
                cout<<s1[0]<<endl;
                flg++;
            }

        }
         if((s1[1]==s2[1]) && (s1[1]==s3[1]))
        {
            if((s1[1]!='.') && flg==0)
            {
                cout<<s1[1]<<endl;
                flg++;
            }

        }
         if((s1[2]==s2[2]) && (s1[2]==s3[2]))
        {
            if((s1[2]!='.')&& flg==0)
            {
                cout<<s1[2]<<endl;
                flg++;
            }

        }
        if((s1[0]==s2[1] )&& (s2[1]==s3[2]))
        {
            if((s1[0]!='.') && flg==0)
            {
                cout<<s1[0]<<endl;
                flg++;
            }

        }
         if((s1[2]==s2[1]) && (s2[1]==s3[0]))
        {
            if((s1[2]!='.')&& flg==0)
            {
                 cout<<s1[2]<<endl;
                 flg++;
            }

        }
        if(flg==0)
            cout<<"DRAW"<<endl;


    }
}
