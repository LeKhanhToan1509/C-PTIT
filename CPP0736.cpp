#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long x;
        cin >> n >> x;
        
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int minLength = n + 1;
        int i = 0, j = 0;
        long long currentSum = 0;
        
        while (i < n) {
            currentSum += a[i];
            while (currentSum > x) {
                minLength = min(minLength, i - j + 1);
                currentSum -= a[j];
                j++;
            }
            i++;
        }
        
        if (minLength == n + 1) {
            cout << "-1\n";
        } else {
            cout << minLength << "\n";
        }
    }
}
