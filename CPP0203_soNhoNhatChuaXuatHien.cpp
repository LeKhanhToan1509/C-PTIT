#include<bits/stdc++.h>

using namespace std;

int used[1000000];

int main(){
    int t;
    cin>>t;
    while(t--){
        memset(used, 0, sizeof(used));
        int n;
        cin>>n;
        int a[n];
        for(int &x : a){
            cin>>x;
            if(x > 0)
            used[x] = 1;
        }
        for(int i = 1; i < 1000000; i++){
            if(!used[i]){
                cout<<i<<endl;
                break;
            }
        }
    }
}