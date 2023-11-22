#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int a[n], b[m];
        for(int &x : a){
            cin>>x;
        }       
        for(int &x : b){
            cin>>x;
        }
        map<int, int> mp;
        for(int x : a){
            mp[x]++;
       }
        for(int i = 0; i < m; i++){
            while(mp[b[i]]--){
                cout<<b[i]<<" ";
            }
            mp[b[i]] = 0;
        }
        sort(a, a+n);
        vector<int> v;
        for(int x : a){
            if(mp[x])
                v.push_back(x);
        }
        for(int x : v){
            cout<<x<<" ";
        }
        cout<<endl;
    }

}