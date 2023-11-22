#include<bits/stdc++.h>

using namespace std;

map<char, int> mp;

int check(string s){
    for(int i = 0; i < s.size(); i++){
        if(isdigit(s[i])){
            mp[s[i]]++;
        }
    }
    for(int i = '0'; i <= '9'; i++){
        if(!mp[i])  return 0;
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        mp.clear();
        string s;
        cin>>s;
        if(s[0] == '0'){
            cout<<"INVALID";
            goto end;
        }
        else{
            for(int i = 0; i < s.size(); i++){
                if(!isdigit(s[i])){
                    cout<<"INVALID";
                    goto end;
                }
            } 
        }
        if(check(s)){
            cout<<"YES";
            goto end;
        }
        else{
            cout<<"NO";
            goto end;
        }
        end :
        cout<<endl;
    }

}