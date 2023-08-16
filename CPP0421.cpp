#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        map<long long, int> mp;
        for(long long &x : a){
            cin>>x;
            mp[x]++;
        }
        for(int i = 0; i < n; i++){
            if(mp[i]){
                cout<<i<<" ";
            }
            else cout<<"-1 ";
        }
        cout<<endl;
    }   

}