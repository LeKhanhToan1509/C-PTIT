#include<bits/stdc++.h>

using namespace std;

int sosanh(int a[], int b[], int n){
    set<int> se, se1;
    for(int i = 0; i < n; i++){
        se.insert(a[i]);
        se1.insert(b[i]);
    }
    int cnt = 0;
    for(int x : se){
        if(se1.count(x)){
            cnt++;
        }
    }
    return cnt;
}
int a[105][105];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>a[i][j];
            }
        }
        int cnt = 1000;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                cnt = min(cnt, sosanh(a[i], a[j], n));
            }
        }
        cout<<cnt<<endl;
    }

}