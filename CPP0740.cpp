#include<bits/stdc++.h>

using namespace std;

int n;
int a[105];

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;       
        for(int i = 1; i <= n; i++){
            cin>>a[i];
        }
        long long res = 0;
        long long kq;
        for(int i = 1; i <= n; i++){
            kq = a[i];
            res = max(kq, res);
            for(int j = i+1; j <= n; j++){
                kq*=a[j];
                res = max(kq, res);
                if(kq == 0) break;
            }
        }
        cout<<res<<endl;
    }

}