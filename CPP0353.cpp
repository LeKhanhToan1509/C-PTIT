#include<bits/stdc++.h>

using namespace std;

int check(vector<int> v){
    int n = v.size();
    for(int i = 0; i < n/2; i++){
        if(v[i] != v[n-i-1])    return 0;
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        map<int, set<char>> mp;
        for(char &x : s){
            x = toupper(x);
        }   
        vector<int> v;
        for(char x : s){
            int d = (int)x;
            int k = (d-65)/3;
            if(d >= 83){
                k = 5+(d-81)/3;
            }
            if(d == 90){
                k = 7;
            }
            v.push_back(k);
        }   
        if(check(v)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}