#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    endl
#define pb    push_back
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    double a,b; cin>>a>>b;
    double n; cin>>n;
    vector<double>v;
    while(n--)
    {
        double xi,yi,vi;
        cin>>xi>>yi>>vi;
        double x=abs(a-xi);
        double y=abs (b-yi);
        double sum=sqrt(x*x+y*y);
        double t=sum/vi;
        v.pb(t);
    }
  double p=*min_element(v.begin(),v.end());
cout<<fixed <<setprecision(20)<<p<<nl;
}
