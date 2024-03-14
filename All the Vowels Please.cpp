#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    //if(n==1) cout<<-1<<nl;
    //else if(n==2) cout<<"ae"<<nl;
    //else

    vector<ll>v;
    ll flg=0;
    for(ll i=5; i*i<=n; i++)
    {
        if(n%i==0 && n/i>=5)
        {
            v.push_back(i);
            v.push_back(n/i);
            flg=1;
            break;
        }
    }
   // for(auto it : v) cout<<it<<' ';
    if(flg==0) cout<<-1<<nl;
    else
    {
        if(v[0]<5 || v[1]<5)
            cout<<-1;
        else
        {
             string str = "aeiou";
        ll k = 0;

        for(ll i = 0; i < v[0]; i++)
        {
            ll x = k;
            for(ll j = 0; j < v[1]; j++)
            {
                cout<<str[x];
                x++;

                if(x == 5)
                    x = 0;
            }

            k++;
            if(k == 5)
                k = 0;
        }

        }

    }

}
