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
    cin >> t;
    while (t--)
    {

        string s, str;
        for (int i = 0; i < 8; i++)
        {
            cin >> str;
            s = s + str;
        }
        int p=0,q=0;
        for (int i = 0; i < 8; i++)
        {
            if ((s[i] == s[i + 8]) && (s[i] == s[i + 16]) && (s[i] == s[i + 24]) && (s[i] == s[i + 32]) && (s[i] == s[i + 40]) && (s[i] == s[i + 48]) && (s[i] == s[i + 56]) && s[i] != '.')
            {
                cout << s[i] << nl;
                p++;
                break;
            }
        }
        if(p==0)
        {

            int b = 0, r = 0,cnt=0;
            for (int i = 0; i < 64; i++) // Change 63 to 64 here
            {
                if (s[i] == 'B')
                    b++;
                else
                    b = 0;
                if (b == 8)
                {
                    cout << "B" << nl;
                    cnt++;
                    break;
                }
            }
            if(cnt==0)
            {
                for (int i = 0; i < 64; i++) // Change 63 to 64 here
                {
                    if (s[i] == 'R')
                        r++;
                    else
                        r = 0;
                    if (r == 8) // Change b to r here
                    {
                        cout << "R" << nl;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}
