#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;
        long long cnt = n/k;
        long long s = (k-1)*(k)/2;
        n %= k;
        long long s2 = n*(n+1)/2;
        long long result = s*cnt + s2;
        cout<<result<<endl;
    }
}