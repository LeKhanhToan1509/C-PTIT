#include<bits/stdc++.h>

using namespace std;

int check(long long n){
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0)  return 0;
    }
    return 1;
}

int check2(long long n){
    int mode = 0; // tang : 1, giam : 2
    while(n>9){
        int x = n%10;
        n/=10;
        int y = n%10;
        if(x > y){
            if(!mode){
                mode = 1;
            }
            if(mode==2) return 0;
        }
        else if(x==y)    return 0;
        else{
            if(!mode){
                mode = 2;
            }
            if(mode == 1)    return 0;
        }
    }
    return 1;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt = 0;
        for(long long i = pow(10, n-1); i < pow(10, n); i++){
            if(check2(i) && check(i) ){
                cnt++;
            } 
        }
        cout<<cnt<<endl;
    }
}