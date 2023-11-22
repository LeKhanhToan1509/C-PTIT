#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int &x : a){
            cin>>x;
        }       
        int res = 0;
        for(int len = n-1; len >= 1; len--){
            for(int i = 0; i < n-len; i++){
                int j = i + len;
                if(a[j] >= a[i]){
                    res = len;
                    break;
                }
            }
            if(res) break;
        }
        cout<<res<<endl;
    }

}