#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }       
        int dp[n+1];
        fill(dp+1, dp+n+1, 1);
        for(int i = 2; i <= n; i++){
            for(int j = 1; j < i; j++){
                if(a[j] < a[i]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        for(int i = 1; i <= n; i++){
            cout<<dp[i]<<" ";
        }
        cout<<endl;
    }

}