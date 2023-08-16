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
        int m = 1e9;
        int res;
        for(int i = 0; i < n-1; i++){
            for(int j = i + 1; j < n; j++){
                int x = a[i] + a[j];
                if(m > abs(x)){
                    m = abs(x);
                    res = x;
                }
            }
        }
        cout<<res<<endl;
    }

}