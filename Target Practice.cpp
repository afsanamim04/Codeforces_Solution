#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int t,l;
    cin>>t;
    while(t--)
    {
        char s;
        l=0;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cin>>s;
                if(s=='X'&&((i==0)||(i==9)))
                {
                    l=l+1;
                }
                else if(s=='X'&&((i>0&&i<9)&&((j==0)||(j==9))))
                        {
                            l++;
                        }
                            else if(s=='X'&&((i==1)||(i==8))&&(j>0&&j<9))
                            {
                                l+=2;
                            }
                            else if(s=='X'&&((i>1&&i<8)&&((j==1)||(j==8))))
                            {
                                l+=2;
                            }
                           else if(s=='X'&&((i==2)||(i==7))&&(j>1&&j<8))
                            {
                                l+=3;
                            }
                            else if(s=='X'&&((i>2&&i<7)&&((j==2)||(j==7))))
                            {
                                l+=3;
                            }
                            else if(s=='X'&&((i==3)||(i==6))&&(j>2&&j<7))
                            {
                                l+=4;
                            }
                            else if(s=='X'&&((i>3&&i<6)&&((j==3)||(j==6))))
                            {
                                l+=4;
                            }
                            else if(s=='X'&&((i==4)||(i==5))&&(j>3&&j<6))
                            {
                                l+=5;
                            }
                            else if(s=='X'&&((i>4&&i<5)&&((j==4)||(j==5))))
                            {
                                l+=5;
                            }
            }
        }
        cout<<l<<endl;
    }
}
