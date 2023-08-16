#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, maxPrime;
        cin >> n;
        while (n % 2 == 0) {
            n /= 2;
            maxPrime = 2;
        }
        for (long long i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                n /= i;
                maxPrime = i;
            }
        }
        maxPrime = max(maxPrime, n);
        cout << maxPrime << endl;
    }
}
