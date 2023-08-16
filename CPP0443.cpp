#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n-1];
        map<int, int> mp;
        for(int &x : a){
            cin>>x;
            mp[x]++;
        }       
        for(int i = 1; i <= 1e7; i++){
            if(!mp[i]){
                cout<<i<<endl;
                break;
            }
        }
    }

}