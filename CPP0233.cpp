#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n][m];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>a[i][j];
            }
        }       
        int cnt = 0;
        vector<int> v;
        int l = 0, r = m-1, u = 0, d = n-1;
        while(l <= r && u <= d){
            for(int i = l; i <= r; i++){
                v.push_back(a[u][i]);
            }
            u++;
            for(int i = u; i <= d; i++){
                v.push_back(a[i][r]);
            }
            r--;
            for(int i = r; i >= l; i--){
                v.push_back(a[d][i]);
            }
            d--;
            for(int i = d; i >= u; i--){
                v.push_back(a[i][l]);
            }
            l++;
        }
        for(int i = n*m-1; i >= 0; i--){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

}