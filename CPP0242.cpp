#include<bits/stdc++.h>

using namespace std;

int a[1005], b[1005];
int dp[1005][1005];

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }
        for(int i = 1; i <= n; i++){
            cin>>b[i];
        }
        for(int i = 1; i <= n; i++){
            dp[i][i] = a[i]-b[i];
        }
        int m = 1;
        for(int len = 1; len <= n-1; len++){
            for(int i = 1; i <= n-len; i++){
                int j = i+len;
                dp[i][j] = dp[i][j-1] + dp[i+1][j] - dp[i+1][j-1];
                if(dp[i][j] == 0){
                    m = max(m, len+1);
                }
            }
        }
        cout<<m<<endl;
    }

}