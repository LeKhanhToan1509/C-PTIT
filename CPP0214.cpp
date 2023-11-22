#include<bits/stdc++.h>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int &x : a){
            cin>>x;
        }
        int m = *max_element(a, a+k);
        cout<<m<<" ";   
        for(int i = k; i < n; i++){
            if(a[i-k] == m){
                m = *max_element(a+i-k+1, a+i+1);
            }
            else{
                m = max(m, a[i]);
            }
            cout<<m<<" ";

        }
        cout<<endl;
   }

}