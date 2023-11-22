#include<bits/stdc++.h>

using namespace std;

int check(int a[], int n, int x){
    for(int i = 1; i < n; i++){
        if(a[i]%x != a[i-1]%x) return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int m = 0;
        for(int &x : a){
            cin>>x;
            m = max(m, x);
        }    
        int res = 0;  
        for(int i = 1; i < m; i++){
            if(check(a, n, i)){
                res++;
            }
        }
        if(n==1 || n == 0)  cout<<"0\n";
        else    
            cout<<res<<endl;
    }

}