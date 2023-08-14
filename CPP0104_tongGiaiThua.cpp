#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long sum = 0;
    long long giaithua = 1;
    for(int i = 1; i <= n; i++){
        giaithua*=1ll*i;
        sum += 1ll*giaithua;
    }   
    cout<<sum;
}