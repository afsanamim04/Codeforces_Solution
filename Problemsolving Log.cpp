#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    int n; cin>>n;
    string str;
    cin>>str;
    unordered_map<char,int> M;
    for(char c : str )
    {
            M[c]++;
    }
    int cnt=0;
    for(char ch='A';ch<='Z';ch++)
        {
            int ans=ch -'A'+ 1;
            if(M[ch] >= ans)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
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
