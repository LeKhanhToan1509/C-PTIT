#include<bits/stdc++.h>

using namespace std;

int used[100005];

int main(){
    memset(used, 0, sizeof(used));
    int n, k, m;
    cin>>n>>k>>m;
    while(m--){
        int x;
        cin>>x;
        used[x] = 1;
    }   
    int result = 1e9;
    for(int i = 0; i <= n; i++){
        int cnt = 0;
        if(i <= n-k){
            for(int j = i+1; j <= i+k; j++){
                if(used[j]){
                    cnt++;
                }
            }
            result = min(cnt, result);
            // cout<<i+1<<" "<<i+k<<" "<<result<<endl;
            
        }
    }
    cout<<result;
}