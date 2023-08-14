#include<bits/stdc++.h>

using namespace std;

int used[10005];

int check(int n){
    if(n < 2)   return 0;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0)  return 0;
    }
    return 1;
}

void solve(){
    for(int i = 2; i <= 10005; i++){
        if(check(i))    used[i] = 1; 
    }
}
int main(){
    int t;
    cin>>t;
    memset(used, 0, sizeof(used));
    solve();
    while(t--){
        int n;
        cin>>n;
        for(int i = 2; i <= n; i++){
            if(used[i]) cout<<i<<" ";
        }
        cout<<endl;
    }
}