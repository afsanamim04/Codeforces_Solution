// In The Name of Allah
#include <bits/stdc++.h>
#define PI acos(-1.0)
#define all(x) x.begin(), x.end()
#define nl '\n'
#define pb push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    string a, s, b, c;
    cin >> a >> s;
    int p = s.size() - a.size();
    reverse(all(s));
    reverse(all(a));
    //cout << s << ' ' << a << nl;
    int j = 0;
    for( int i = 0; i < a.size(); ++i )
    {
        c.clear();
        if (j >= s.size())
        {
            cout << -1 << nl;
            return;
        }
        if((s[j] - '0') >= (a[i] - '0'))
        {
            b += to_string((s[j]-'0') - (a[i]-'0'));
            j++;
        }
        else if( ((s[j] - '0') < (a[i] - '0')) )
        {
            if (j + 1 >= s.size()) {
                cout << -1 << nl;
                return;
            }
            c += s[j+1];
            c += s[j];
            int q = stoi(c);
            if (q > 18 || q < (a[i] - '0')) {
                cout << -1 << nl;
                return;
            }
            q -= (a[i] - '0');
            b += to_string(q);
            j += 2;
        }
        else
        {
            cout << -1 << nl;
            return;
        }
    }
    while (j < s.size()) {
        b += s[j];
        j++;
    }

    while (b.size() > 1 && b.back() == '0') {
        b.pop_back();
    }
    reverse(all(b));
    cout << b << nl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        sol();
    }
    return 0;
}



