#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n], b[k];
        set<int> se, hop, giao;
        for(int &x : a){
            cin>>x;
            se.insert(x);
            hop.insert(x);
        }       
        for(int &x : b){
            cin>>x;
            if(se.count(x)) giao.insert(x);
            else hop.insert(x);    
        }
        for(int x : hop){
            cout<<x<<" ";
        }
        cout<<endl;
        for(int x : giao){
            cout<<x<<" "; 
        }
        cout<<endl;
    }

}