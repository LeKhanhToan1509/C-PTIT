#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n>>q;
        int a[n+1], dp[n+1];
        dp[0] = 0;
        for(int i = 1; i <= n; i++){
            cin>>a[i];
            dp[i] = dp[i-1] + a[i];
        }       
        while(q--){
            int l, r;
            cin>>l>>r;
            cout<<dp[r] - dp[l-1]<<endl;
        }
    
    }
}