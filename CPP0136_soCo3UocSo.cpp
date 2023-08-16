#include<bits/stdc++.h>
using namespace std;

int nt(long long n) {
    if (n == 2) return 1;
    if (n < 2 || n % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int k = 0;
        for (long long i = 2; i * i <= n; i++) {
            if (nt(i) && i * i <= n) {
                k++;
            }
        }
        cout << k << endl;
    }
}