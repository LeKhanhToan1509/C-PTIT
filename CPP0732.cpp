#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }    
        long long dp[n+1];
        memset(dp, 0, sizeof(dp));
        a[0] = 0;
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < i; j++){
                if(a[i] > a[j]){
                    dp[i] = max(dp[j] + a[i], dp[i]);
                }
            }
        }
        cout<<*max_element(dp + 1, dp+n+1)<<endl;
    }

}