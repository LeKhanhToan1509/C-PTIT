#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(long long &x : a){
            cin>>x;
        }       
        for(int i = 0; i < n; i++){
            if(i==0)    cout<<a[i]*a[i+1]<<" ";
            else if(i==n-1)  cout<<a[n-2]*a[n-1]<<" ";
            else cout<<a[i-1]*a[i+1]<<" ";
        }
        cout<<endl;
    }

}