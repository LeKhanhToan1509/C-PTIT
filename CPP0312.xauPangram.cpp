#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int k;
        cin>>k;
        map<char, int> mp;
        int cnt = 0;
        if(s.size() < 26){
            cout<<"0\n";
            goto end;
        }
        for(char x : s){
            mp[x]++;
        }
        for(char i = 'a'; i <= 'z'; i++){
            if(mp[i] == 0)  cnt++;
        }
        if(cnt > k){
            cout<<"0";
            goto end;
        }    
        else{
            cout<<"1";
            goto end;
        }
        end :
        cout<<"\n";
    }
}