#include<bits/stdc++.h>

using namespace std;

int used_i[105], used_j[105]; 

int main(){
    int t;
    cin>>t;
    while(t--){
       int n, m;
       cin>>n>>m;
        int a[105][105];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>a[i][j];
                if(a[i][j] == 1){
                    used_i[i] = 1;
                    used_j[j] = 1;
                }
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(used_i[i] == 1 || used_j[j] == 1){
                    cout<<"1 ";
                }
                else cout<<"0 ";
            }
            cout<<endl;
        }
    }
}