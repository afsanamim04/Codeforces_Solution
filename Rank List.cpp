#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;

    map < pair < int, int >, int > cnt;
    vector < pair<int, int> > v(n+5);

    for (int i = 0; i < n; ++i) {
        cin >> v[i].first >> v[i].second;
        cnt[v[i]]++;
    }

    for (int i = 0; i < n; ++i)
        v[i].second *= -1;

    sort(v.rbegin(), v.rend());

    for (int i = 0; i < n; ++i)
        v[i].second *= -1;
    //cout << v[k-1].first <<' '<<v[k-1].second << nl;
    cout << cnt[v[k-1]] << nl;

    return 0;
}
