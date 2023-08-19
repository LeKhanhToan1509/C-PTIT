#include<bits/stdc++.h>

using namespace std;

int search(long long a[], int n, int l, long long x){
    int r = n-1, m;
    while(l <= r){
        m = (l+r)/2;
        if(a[m] == x){
            return m;
        }
        else if(a[m] > x){
            r = m-1;
        }
        else{
            l = m+1;
        }
    }
    return -1;
} 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(long long &x : a){
            cin>>x;
            x *=x;
        }       
        sort(a, a+n);
        int check = 0;
        for(int i = 0; i < n-2; i++){
            for(int j = i+1; j < n-1; j++){
                int idx = search(a, n, j+1, a[i] + a[j]);
                if(idx != -1){
                    check = 1;
                }
            }
        }
        if(check)   cout<<"YES\n";
        else cout<<"NO\n";

    }

}