#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n*n];
        for(int &x : a){
            cin>>x;
        }
        sort(a, a+n*n);
        cout<<a[k-1]<<endl;
        
    }

}