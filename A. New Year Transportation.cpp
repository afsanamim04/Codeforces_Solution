#include<bits/stdc++.h>
#define nl    '\n'
#define pb push_back
#define ll long long int
using namespace std;
vector<int>v[100000+5];
bool vis[100000+5];
void DFS(int node)
{
    vis[node]=true;
    for(auto child: v[node])
    {
        if(vis[child]==false) DFS(child);
    }
}

int main()
{
    int n,t; cin>>n>>t;
    vector<int>v1,v2;
    for(int i=0; i<n-1; i++)
    {
        int j; cin>>j;
        v1.pb(j);
    }

    for(int i=0; i<n-1; ++i)
    {
        int q=(i+1)+v1[i];
        v2.pb(q);
    }
   // for(auto it: v2) cout<<it<<' ';
    v[1].pb(v2[0]);
    v[v2[0]].pb(1);
    int j=2, x=v2[0];
    while (j - 1 < v2.size() && v2[j - 1] <= n) {
    if (j >= x) {
        v[j].pb(v2[j - 1]);
        v[v2[j - 1]].pb(j);
        x = v2[j - 1];
    }
    j++;
}
//This code includes a check to ensure that j - 1 is within the valid bounds of the v2 vector before accessing it. This should help prevent the runtime error.






    /*for (int i = 1; i <=n; i++) {
        cout << i << "->";
        for (int& x : v[i]) {
            cout << x << " ";
        }
        cout << endl;
    }*/
    DFS(1);
   if(vis[t]==false) cout<<"NO"<<nl;
   else cout<<"YES"<<nl;
}
