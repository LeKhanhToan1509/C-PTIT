#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> &v, int l, int r) {
    int t = -1;
    for (int i = l; i < r; i++) {
        if (v[i] > v[i + 1]) {
            t = i;
            break;
        }
    }
    if (t > -1) {
        for (int i = t; i < r; i++) {
            if (v[i] < v[i + 1]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int t, n, x, l, r;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++) {
            cin >> x;
            v.push_back(x);
        }
        cin >> l >> r;
        if (check(v, l, r)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
