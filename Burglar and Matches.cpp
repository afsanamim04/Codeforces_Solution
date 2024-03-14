#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>v;
    for(int i=0; i<m; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    auto comparator = [](const auto& lhs, const auto& rhs)
    {
        return lhs.second > rhs.second;
    };

    sort(v.begin(), v.end(), comparator);
   /* for (const auto& pair : v) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }*/
    int sum=0,ans=0,p=0;
    for(int i=0; i<m; i++)
    {
        sum+=v[i].first;
        if(sum>n)
        {
            ans += ((n-p)*(v[i].second));
            break;
        }
        else
        {
            ans += ((v[i].first)*(v[i].second));
        }
         p=sum;
    }
    cout<<ans<<nl;

}
