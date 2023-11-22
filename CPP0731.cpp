#include <bits/stdc++.h>

using namespace std;

int a[1005], n;
int solve()
{
    int cur, m, cnt;
    cur = m = cnt = 0;
    for (int i = 0; i < n; i++)
    {
        m = max(m, i + a[i]);
        if (m >= n - 1)
        {
            cnt++;
            break;
        }
        if (i == cur)
        {
            cnt++;
            cur = m;
        }
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cout << solve() << endl;
    }
}