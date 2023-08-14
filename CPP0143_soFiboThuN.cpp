#include<bits/stdc++.h>

using namespace std;

long long fibo[100];

void sieve(){
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i <= 93; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
}
int main(){
    int t;
    cin>>t;
    sieve();
    while(t--){
        int n;
        cin>>n;
        cout<<fibo[n]<<endl;
    }
}