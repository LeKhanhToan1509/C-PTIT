#include<bits/stdc++.h>

using namespace std;

int check(int n){
    if(n < 2)   return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0)  return 0;
    }
    return 1;
}
int main(){
    int l, r;
    cin>>l>>r;
    if(l > r){
        swap(l, r);
    }
    for(int i = l; i <= r; i++){
        if(check(i))    cout<<i<<" ";
    }
}