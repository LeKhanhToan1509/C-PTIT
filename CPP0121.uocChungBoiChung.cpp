#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
    while (a*b != 0){ 
        if (a > b){
            a %= b;
        }
        else{
            b %= a;
        }
    }
    return a+b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;              
        int k = gcd(a, b);
        cout<<1ll*a*b/k<<" "<<k<<endl;
    }
}