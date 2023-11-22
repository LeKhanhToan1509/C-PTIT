#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }
    cin>>m;
    int b[m][m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            cin>>b[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int i1 = i%m;
            int j1 = j%m;
            a[i][j] *= b[i1][j1];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}