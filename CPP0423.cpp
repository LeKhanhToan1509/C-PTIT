// Created by Nguyễn Mạnh Quân

#include<bits/stdc++.h>

using namespace std;


int minSwap(int a[], int n, int k)
{
    int cnt = 0;
    for(int i = 0; i < n; ++i) if(a[i] <= k) ++cnt;
    int tmp = 0;
    for(int i = 0; i < cnt; ++i) if(a[i] > k) ++tmp;
    int ans = tmp;
    cout<<ans<<endl;
    for (int i = 0, j = cnt; j < n; ++i, ++j)
    {
        if (a[i] > k) --tmp;
        if (a[j] > k) ++tmp;
        ans = min(ans, tmp);
    }
    return ans;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; ++i) cin >> a[i];
    cout << minSwap(a, n, k) << endl;
}
  
int main()
{
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}