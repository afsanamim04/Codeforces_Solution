#include<bits/stdc++.h>
using namespace std;
void sol(){int n,sum=0; cin>>n;
for(int i=0;i<n-1;++i)
    {
    int j; cin>>j;
    sum+=j;
    } cout<<-1*sum<<endl;
}
int main()
{
    int t;cin>>t;
    while(t--){sol();}
}
