#include<bits/stdc++.h>

using namespace std;

int binSearch(int a[], int n, int x){
    int l = 0, r = n-1;
    int m;
    while(l <= r){
        m = (l+r)/2;
        if(a[m] == x){
            return 1;
        }
        else if(a[m] > x){
            r = m-1;
        }
        else l = m+1;
    }
    return 0;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        int a[n];
        for(int &x : a){
            cin>>x;
        }
        if(binSearch(a, n, x)){
            cout<<"1\n";
        }
        else cout<<"-1\n";
    }

}