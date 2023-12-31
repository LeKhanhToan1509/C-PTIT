#include<bits/stdc++.h>

using namespace std;

int n, m;
int a[105][105];
int cnt = 0;

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int isValid(int i, int j){
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] == 1;
}

void loang(int i, int j){
    a[i][j] = 0;
    for(int k = 0; k < 8; k++){
        int i1 = i + dx[k], j1 = j + dy[k];
        if(isValid(i1, j1)) loang(i1, j1);
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(a[i][j]){
                    loang(i, j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }

}