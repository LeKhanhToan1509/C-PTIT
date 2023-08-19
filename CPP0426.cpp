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
        vector<int> lon, be;
        sort(a, a+n);
        for(int i = 0; i < n/2; i++){
            be.push_back(a[i]);
        }
        for(int i = n-1; i >= n/2; i--){
            lon.push_back(a[i]);
        }
        for(int i = 0; i < n/2; i++){
            cout<<lon[i]<<" "<<be[i]<<" ";
        }
        if(n%2==1)  cout<<lon[n/2];
        cout<<endl;
    }
}