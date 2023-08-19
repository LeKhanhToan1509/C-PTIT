#include <bits/stdc++.h>

using namespace std;

int a[1005];
double dp[1005];

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += a[i];
        }
        
        dp[k - 1] = (double)(sum) / k;
        double m = dp[k - 1];
        for (int i = k; i < n; i++) {
            sum += a[i] - a[i - k];
            dp[i] = (double)(sum) / k;
            m = max(m, dp[i]);
        }

        int res = -1;
        for (int i = k - 1; i < n; i++) {
            if (dp[i] == m) {
                res = i;
                break;
            }
        }

        for (int i = res - k + 1; i <= res; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
}