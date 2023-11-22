#include<bits/stdc++.h>

using namespace std;

int dp[1005][1005];
int main(){
    int t;
    cin>>t;
    while(t--){
        memset(dp, 0, sizeof(dp));
        string s;
        cin>>s;
        int k;
        cin>>k;
        int n = s.size();
        s = '1' + s;
        for(int i = 1; i <= n; i++){
            dp[i][i] = 1;
        }
        int cnt = 0;
        for(int len = 1; len <= n; len++){
            for(int i = 1; i <= n - len; i++){
                int j = i + len;
                if(s[i] != s[j]){
                    dp[i][j] = dp[i+1][j] + dp[i][j-1] - dp[i+1][j-1];
                }
                else 
                    dp[i][j] = dp[i][j-1];
            }
        }
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(dp[i][j] == k){
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }

}