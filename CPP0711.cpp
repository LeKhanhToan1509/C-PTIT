#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i = 0; i < pow(2, n); i++){
            for(int j = n-1; j >= 0; j--){
                if(i & (1<<j)){
                    cout<<"1";
                }
                else cout<<"0";
            }
            cout<<" ";
        }       
        cout<<endl;
    }

}