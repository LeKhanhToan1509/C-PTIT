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
        vector<int> m, M;    
        sort(a, a+n);
        int k;
        if(n%2==0)  k = n/2;
        else    k = n/2+1;
        for(int i = 0; i < k; i++){
            m.push_back(a[i]);
        }
        for(int i = k; i < n; i++){
            M.push_back(a[i]);
        }
        for(int i = 0; i < n/2; i++){
            cout<<m[i]<<" "<<M[i]<<" ";
        }
        if(m.size() > n/2){
            cout<<m[n/2];
        }
        cout<<endl;
    }

}