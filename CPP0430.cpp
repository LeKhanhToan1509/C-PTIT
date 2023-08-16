#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        int l = 1e9, r = - 1e9;
        for(int &x : a){
            cin>>x;
            if(l > x){
                l = x;
            }
            if(r < x){
                r = x;
            }
            mp[x] ++;
        }
        int cnt = 0;
        for(int i = l; i < r; i++){
            if(mp[i] == 0){
                cnt++;
            }
        }

        cout<<cnt<<endl;

    }

}