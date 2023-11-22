#include<bits/stdc++.h>
using namespace std;

long long isPrime(long long n) {
    if (n < 2) return 0;
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
vector<long long> v;

void sieve() {
    for (int i = 2; i <= 31; i++) {
        if (isPrime(i)) {
            int tmp = pow(2, i) - 1;
            if (isPrime(tmp)) {
                long long hh = 1ll * tmp * pow(2, i - 1);
                v.push_back(hh);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    sieve();
    while (t--) {
        long long n;
        cin >> n;
        int check = 0;
        for (int i = 0; i < v.size(); i++) {
            if (n == v[i]) {
                check = 1;
                break; 
            }
        }
        if (check == 0) {
            cout << "0\n";
        } else {
            cout << "1\n"; 
        }
    }
    return 0;
}
