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
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        vector<ll> v;  // Use a vector instead of a string to store integers
        vector<ll> v1; // Use a vector instead of a string to store integers

        for(int i = 0; i < n; i++)
        {
            ll j;
            cin >> j;
            v.push_back(j); // Push the integer into the vector
            v1.push_back(j); // Push the integer into the vector
        }

        sort(v.begin(), v.end());
        //sort(v1.begin(), v1.end()); // Sort the second vector

        if(v1 == v) // Compare the sorted vectors
        {
            cout << "YES" << nl;

        }
       else  if(k == 1)
        {
            cout << "NO" << nl;
        }
        else
        {
            cout << "YES" << nl;
        }
    }

    return 0;
}
