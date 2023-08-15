#include<bits/stdc++.h>

using namespace std;

int check(string s){
    for(int i = 0; i < s.size(); i++){
        if(s[i] != s[s.size()-i-1] || (s[i]-'0') % 2 == 1){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(check(s))    cout<<"YES\n";
        else cout<<"NO\n";
    }
}