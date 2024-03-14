#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int digitSum(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
 int sol(int n)
 {
     long long int totalSum = 0;
        for (int i = 1; i <= n; i++) {
            totalSum += digitSum(i);
        }
        return totalSum;
 }
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << sol(n) << nl;
    }

    return 0;
}
