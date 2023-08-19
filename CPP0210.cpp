#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+1];
        int dp[n+1];
        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }   
        fill(dp, dp+n+1, 1); 
        for(int i = 1; i < n; i++){
            for(int j = 1; j < i; j++){
                if(a[i] > a[j]){
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        int check = 0;
        int m = 0;
        for(int i = 1; i < n; i++){
            for(int j = i+1; j <= n; j++){
                if(dp[j] > dp[i]){
                    check = 1;
                    m = max(a[j] - a[i], m);
                }
            }
        }
        if(check == 0){
            cout<<"-1\n";
        }
        else{
            cout<<m<<endl;
        }
    }

}