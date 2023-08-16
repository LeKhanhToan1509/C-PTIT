#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int, int> mp;
        int a[n];
        for(int &x : a){
            cin>>x;
            mp[x]++;
        }      
        for(int i = 0; i <= 2; i++){
            while(mp[i]--){
                cout<<i<<" ";
            }
        }
        cout<<endl;
    }
}