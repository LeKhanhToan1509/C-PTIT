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
        int check = 0, res;
        for(int &x : a){
            cin>>x;
            mp[x]++;
            if(mp[x] == 2 && check == 0){
                res = x;
                check = 1;
            }
        }   
        if(check == 0)  cout<<"-1\n";
        else cout<<res<<endl;
    }
}