#include<bits/stdc++.h>

using namespace std;

long long mod;

long long binPow(long long x, long long y){
    if(y == 1)  return x%mod;
    long long res = binPow(x, y/2);
    res%=mod;
    if(y % 2 == 0)  return res*res%mod;
    else return (res*res)%mod*x%mod;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long x, y;
        cin>>x>>y>>mod;
        cout<<binPow(x, y)<<endl;
    }

}