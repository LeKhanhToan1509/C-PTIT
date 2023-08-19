#include <bits/stdc++.h>
using namespace std;

int upper(int a[], int n, int l, int x) {
    int r = n - 1;
    int m, res = -1;
    while (l <= r) {
        m = (l + r) / 2;
        if (a[m] < x) {
            res = m; 
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a, a + n);
        long long cnt = 0; 
        for (int i = 0; i < n; i++) {
            int idx = upper(a, n, i + 1, a[i] + k); 
            if (idx != -1) {
                cnt += idx - i;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
