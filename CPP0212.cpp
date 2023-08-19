#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long binPow(int x, int n){
    if(n == 0) return 1;
    if(n == 1)  return x%mod;
    long long res = binPow(x, n/2);
    res = (res%mod * res%mod)%mod;
    if(n%2==0)  return res;
    else return (res*(x%mod))%mod;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int a[n];
        for(int &x : a){
            cin>>x;
        }
        reverse(a, a+n);
        long long sum = 0;
        for(int i = 0; i < n; i++){
            long long res = binPow(x, i);
            sum = sum + a[i]*res;
            sum%=mod;
        }
        cout<<sum<<endl;
    }

}