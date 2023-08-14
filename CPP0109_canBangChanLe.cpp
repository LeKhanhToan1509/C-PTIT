#include<bits/stdc++.h>

using namespace std;

int check(int n){
    int chan = 0, le = 0;
    while(n){
        int x = n%10;
        n/=10;
        if(x%2 == 0)    chan++;
        else le++;
    }
    return chan == le;
}
int main(){
    int n;
    cin>>n;
    int cnt = 0;
    if(n%2==0){
        for(int i = pow(10, n-1); i < pow(10, n); i++){
            if(check(i)){
                cout<<i<<" ";
                cnt++;
                if(cnt%10==0)   cout<<endl;
            }
        }
    }
    
}