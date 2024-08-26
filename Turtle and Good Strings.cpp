#include<bits/stdc++.h>
using namespace std;
void sol()
{
        int n ;
        cin >> n;
        string str;
        cin >> str;
        if( str[0] == str[n-1])
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
}
int main()
{
    int t;
    cin >> t;
    while( t-- ){
      sol();
    }
}
