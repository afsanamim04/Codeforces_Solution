#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

void sol()
{
    int n;
    cin >> n;
    priority_queue<ll> myStack;
    ll ans = 0;

    for (int i = 0; i < n; i++)
    {
        ll j;
        cin >> j;

        if (j != 0)
        {
            myStack.push(j);
        }
        else if(j==0 && !myStack.empty())
        {
            ans += myStack.top();
            myStack.pop();

        }
    }

    cout << ans << nl;
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
