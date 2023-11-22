#include<bits/stdc++.h>

using namespace std;

int check(vector<int> v){
    for(int i = 0; i < 4; i++){
        if(v[i] >= v[i+1])   return 0;
    }
    return 1;
}

int check1(vector<int> v){
    if(v[0] != v[1] || v[1] != v[2] || v[3] != v[4]){
        return 0;
    }
    return 1;
}

int check2(vector<int> v){
    for(int i = 0; i < 5; i++){
        if(v[i] != 6 && v[i] != 8){
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
        vector<int> v;
        for(int i = 5; i < s.size(); i++){
            if(isdigit(s[i])){
                v.push_back(s[i] - '0');
            }
        }  
        if(check(v) || check1(v) || check2(v)){
            cout<<"YES\n";
        }
        else cout<<"NO\n";
    }

}