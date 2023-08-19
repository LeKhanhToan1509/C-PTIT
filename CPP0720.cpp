#include<bits/stdc++.h>

using namespace std;

int dp[200];
int dp1[200];
int a[105];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }
        a[n+1] = a[0] = dp[0] = dp[n+1] = 0;
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= i; j++){
                if(a[j] < a[i]){
                    dp[i] = max(dp[j] + 1, dp[i]);
                }
            }
        }

        for(int i = n + 1; i >= 1; i--){
            for(int j = n + 1; j >= i; j--){
                if(a[j] < a[i]){
                    dp1[i] = max(dp1[j] + 1, dp1[i]);
                }
            }
        }
        int m = 0;
        for(int i = 1; i <= n; i++){
            m = max(m, dp[i] + dp1[i] - 1);
        }
        cout<<m<<endl;
        memset(dp, 0, sizeof(dp));
        memset(dp1, 0, sizeof(dp1));
    }
} 