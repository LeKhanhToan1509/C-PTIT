#include<bits/stdc++.h>

using namespace std;

int used[100000];
int dp[100000];
void sieve(){
    used[0] = 0;
    used[1] = 0;
    for(int i = 0; i < 100000; i++){
        used[i] = 1; 
    }

    for(int i = 2; i <= sqrt(100000); i++){
        if(used[i]){
            for(int j = i*i; j <= 100000; j+=i){
                used[j] = 0;
            }
        }
    }    
    for(int i = 2; i <= 100000; i++){
        dp[i] = dp[i-1] + used[i];
    }
}

int main(){
    int t;
    cin>>t;
    sieve();
    while(t--){
        int l, r;
        cin>>l>>r;
        cout<<dp[r] - dp[l-1]<<endl;
    }

}