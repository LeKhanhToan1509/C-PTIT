#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        int sum = 0;
        map<char, int> mp;
        for(int i = 0; i < n; i++){
            if(!isdigit(s[i])){
                mp[s[i]]++;
            }
            else{
                sum += s[i]-'0';
            }
        }       
        for(int i = 'A'; i <= 'Z'; i++){
            while(mp[i]--){
                cout<<(char)i;
            }
        }
        cout<<sum<<endl;
    }

}