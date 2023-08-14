#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, m;
        cin>>a>>m;
        int check = 1;
        for(int i = 1; i < m; i++){
            if(a*i%m == 1) {
                cout<<i;
                check = 0;
                break;
            }
        }
        if(check){
            cout<<"-1";
        }
        cout<<endl;
    }
}