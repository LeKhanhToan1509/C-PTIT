#include<bits/stdc++.h>

using namespace std;

int check(long long n){
    int last = 0;
    int cnt = 0;
    while(n){
        int x = n%10;
        n/=10;
        cnt++;
        last = last*10+x;
        if(cnt == 2)    break;
    }
    return last == 68;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;    
        if(check(n))    cout<<"1\n";
        else cout<<"0\n";   
    }
}