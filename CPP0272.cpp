#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

long long bin_pow(long long a, int b){
    if(b == 1)  return a;
    long long res = bin_pow(a, b/2)%mod;
    res = res*res%mod;
    if(b%2==0)  return res;
    else return (res * a)%mod;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        long long sum = 1;
        for(int &x : a){
            cin>>x;
            sum = (sum*x)%mod;

        }       
        int uoc = a[0];
        for(int i = 1; i < n; i++){
            uoc = __gcd(uoc, a[i]);
        }
        cout<<bin_pow(sum, uoc)<<endl;
    }

}