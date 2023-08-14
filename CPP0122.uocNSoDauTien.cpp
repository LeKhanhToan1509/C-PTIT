#include<bits/stdc++.h>

using namespace std;

long long lcm(long long a, long long b){
    return 1ll*a*b/__gcd(a, b);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long sum = 1;
        for(int i = 2; i <=n ; i++){
            sum = lcm(sum, 1ll*i);
        }
        cout<<sum<<endl;
    }
}