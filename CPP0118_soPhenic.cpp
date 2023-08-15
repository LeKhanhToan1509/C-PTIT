#include<bits/stdc++.h>

using namespace std;

int check(int n){
    int cnt = 0;
    int cnt1 = 0;
    if(n%2==0)  cnt1++;
    while(n%2==0){
        cnt++;
        n/=2;
    }

    if(cnt > 1) return 0;
    for(int i = 3; i*i <= n; i+=2){
        cnt = 0;
        if(n%i==0)  cnt1++;
        while(n%i==0){
            n/=i;
            cnt++;
        }
        if(cnt > 1) return 0;
    }
    if(n > 2)   cnt1++;
    return cnt1 == 3;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(check(n))    cout<<"1\n";
        else cout<<"0\n";       
    }
}