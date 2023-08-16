#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int a[n];
        map<int, int> mp;
        for(int &x : a){
            cin>>x;
            mp[x]++;
        }       
        if(mp[k]){
            cout<<mp[k]<<endl;
        }
        else{
            cout<<"-1\n";
        }
    }

}