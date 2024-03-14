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
        int n;
        cin >> n;
        vector<int> v;

        int k = n * (n + 1) / 2;

        if (k % n == 0 && n > 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i <= n; i++)
            {
                v.push_back(i);
            }

            if (n % 2 == 0)
            {
                for (int i = 1; i < n; i += 2)
                {
                    cout << v[i] << " " << v[i - 1] << " ";
                }
            }
            else
            {
                for (int i = 1; i < n - 1; i += 2)
                {
                    cout << v[i] << " " << v[i - 1] << " ";
                }
                cout << v[n - 1] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}
