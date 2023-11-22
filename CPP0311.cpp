#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<char, int> mp;
        int m = 0;
        char x;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
            if(m < mp[s[i]]){
                m = mp[s[i]];
                x = s[i];
            }
        }       
        int sum = 0;
        for(char i = 'a'; i <= 'z'; i++){
            if(i != x){
                sum+=mp[i];
            }
        }
        if(m-1 <= sum){
            cout<<"1\n";
        }
        else cout<<"0\n";
    }

}