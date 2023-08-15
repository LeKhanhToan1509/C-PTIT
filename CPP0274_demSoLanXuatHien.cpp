#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        map<int, int> mp;
        for(int &x : a){
            cin>>x;
            mp[x]++;
        }
        int cnt = 0;
        for(int x : a){
            if(mp[x] > 1){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}