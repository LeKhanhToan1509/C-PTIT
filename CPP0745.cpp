#include<bits/stdc++.h>

using namespace std;

int fibo[1005];

const int mod = 1e9 + 7;
void seive(){
    fibo[0] = 0;
    fibo[1] = 1;
    for(int i = 2; i <= 1000; i++){
        fibo[i] = fibo[i-1]%mod + fibo[i-2]%mod;
        fibo[i]%=mod;
    }
}
int main(){
    int t;
    cin>>t;
    seive();
    while(t--){
        int n;
        cin>>n;
        cout<<fibo[n]<<endl;       
    }

}