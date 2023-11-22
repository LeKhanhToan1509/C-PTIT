#include<bits/stdc++.h>

using namespace std;

int check(int n, int p){
    int cnt = 0;
    for(int i = 2; i <= n; i++){
        int k = i;
        while(k%p==0){
            k/=p;
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, p;
        cin>>n>>p;
        cout<<check(n, p)<<endl;
    }

}