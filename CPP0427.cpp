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
        for(int i = 0; i < n-1; i++){
            if(a[i] == a[i+1]){
                a[i] = a[i] + a[i+1];
                a[i+1] = 0;
                i++;
            }
        }
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(a[i]){
                cout<<a[i]<<" ";
            }
            else cnt++;
        }
        while(cnt--){
            cout<<"0 ";
        }       
        cout<<endl;
    }
}