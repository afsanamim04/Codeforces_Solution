#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int n,k; cin>>n>>k;
    vector<int>v;
    set<int>s{},s1;
    for(int i=0; i<n; i++)
    {
        int j; cin>>j;
        v.push_back(j);
        s1.insert(j);
    }
    vector<int>uniqueidx{};

  //  if(k!=s.size()) cout<<"NO"<<endl;
   // cout<<s1.size()<<nl;
    if(k<=s1.size())
    {
        for (size_t i = 0; i < v.size(); i++)
        if (s.insert(v[i]).second)
            uniqueidx.push_back(i);
      cout<<"YES"<<endl;
    for (int i=0; i<k; i++)
        cout << uniqueidx[i]+1 << ' ';
    }
    else  cout<<"NO"<<endl;
}
