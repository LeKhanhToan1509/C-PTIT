#include<bits/stdc++.h>

using namespace std;


int check(long long n){
    if(n==1 || n== 0)    return 1;
    long long ans = 1, preans = 1;
    while(ans + preans <= n){
        if(ans + preans == n)   return 1;
        long long sum = ans + preans;
        preans = ans;
        ans = sum;
    }    
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(check(n))    cout<<"YES\n";
        else cout<<"NO\n";
    }
}