#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n+1], dp[n+1];
        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }
        dp[0] = 0;
        dp[1] = a[1];
        dp[2] = a[2];
        for(int i = 3; i <= n; i++){
            dp[i] = max(dp[i-2], dp[i-3]) + a[i];
        }
        cout<<*max_element(dp + 1, dp + n + 1)<<endl;

    }
}