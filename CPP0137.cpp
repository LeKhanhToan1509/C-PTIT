#include<bits/stdc++.h>

using namespace std;

int check(long long n){
    if(n < 2)   return 0;
    if(n == 2)  return 1;
    if(n%2==0)  return 0;
    for(int i = 3; i*i <= n; i+=2){
        if(n%i==0)  return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long l, r;
        cin>>l>>r;
        int cnt = 0;
        for(long long i = l; i*i <= r; i++){
            if(check(i))    cnt++;
        }
        cout<<cnt<<endl;
    }
}