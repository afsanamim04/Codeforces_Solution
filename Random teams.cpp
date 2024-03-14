#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;
/*int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


int nCr(int n, int r) {
    if (r < 0 || r > n) {
        return 0;
    }

    return factorial(n) / (factorial(r) * factorial(n - r));
}*/
int main()
{
    ll n,m;
    cin>>n>>m;
    /*if(m==1)
    {
        ll ans =(n*(n-1))/2;
        cout<<ans<<' '<<ans<<nl;
        return;
    }*/
    ll maxi=((n-(m-1))*(n-(m-1)-1))/2;
    ll a=n/m;
    ll b=n%m;
    ll p=(m-b)*((a*(a-1))/2);
    ll q=b*(((a+1)*a)/2);
    ll mini= p+q;
    cout<<mini<<' '<<maxi<<nl;

}
