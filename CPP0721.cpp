#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x : a){
            cin>>x;
        }
        int dp[n];
        for(int &x : dp){
            x = 1;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < i; j++){
                if(a[j] < a[i]) dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
        cout<<*max_element(dp, dp+n)<<endl;
    }
}