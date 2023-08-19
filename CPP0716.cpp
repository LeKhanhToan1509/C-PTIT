#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[25][25];
int cnt = 0;
int dx[2] = {1, 0};
int dy[2] = {0, 1};
void loang(int i, int j, int sum){
    if(i == n && j == n){
        if(sum == k)    cnt++;
        return;
    }
    if(i > n || j > n)  return;
    for(int k = 0; k < 2; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        loang(i1, j1, sum + a[i1][j1]);
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cnt = 0;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                cin>>a[i][j];
            }
        }                   
        loang(1, 1, a[1][1]);
        cout<<cnt<<endl;
    }

}