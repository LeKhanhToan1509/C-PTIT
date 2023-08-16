#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char, int> mp;
        for(int x : s){
            mp[x] ++;
        }
        int cnt = 0;
        for(int x : s){
            if(mp[x] > 1){
                cnt+=mp[x]*(mp[x]-1)/2;
                mp[x] = 0;
            }
        }
        cout<<s.size() + cnt<<endl; 
    }
}