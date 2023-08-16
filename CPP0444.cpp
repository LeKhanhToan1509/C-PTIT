#include<bits/stdc++.h>

using namespace std;

int binSearch(int a[], int n, int x, int l, int r){
    int m;
    while(l <= r){
        m = (l+r)/2;
        if(a[m] == x){
            return m;
        }
        else if(a[m] > x){
            r = m-1;
        }
        else l = m+1;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }    
        int res = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > a[i+1]){
                res = i;
                break;
            }
        }
        int i = binSearch(a, n, k, 0, res+1);
        int j = binSearch(a, n, k, res+1, n);
        cout<<max(i, j)+1<<endl;
        
    }

}