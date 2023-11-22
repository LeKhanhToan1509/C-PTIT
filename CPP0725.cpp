#include<bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;
int a[1005][1005];

void seive(){
    a[1][1] = 1;
    for(int i = 2; i <= 1000; i++){
        for(int j = 1; j <= i; j++){
            if(j == i){
                a[i][j] = 1;
            }
            else if(j == 1){
                a[i][j] = i;
            }
            else{
                a[i][j] = a[i-1][j]%mod + a[i-1][j-1]%mod;
                a[i][j]%=mod; 
            }
        }
    }
}
int main(){
    int t;
    cin>>t;
    seive();
    while(t--){
        int n, r;   
        cin>>n>>r;
        cout<<a[n][r]<<endl;
    }

}
