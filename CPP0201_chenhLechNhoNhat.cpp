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
        sort(a, a+n);
        int M = 1e9 + 5;
        for(int i = 0; i < n-1; i++){
            M = min(a[i+1] - a[i], M);
        }
        cout<<M<<endl;
    }
}