#include<bits/stdc++.h>

using namespace std;

int check(string s){
    for(int i = 0; i < s.size()/2; i++){
        if(s[i] != s[s.size()-i-1]){
            return 0;
        }
    }
    return 1;
}   

int cmp(string a, string b){
    if(a.size() == b.size()){
        for(int i = 0; i < a.size(); i++){
            if(a[i] > b[i]){
                return a > b;
            }
        }
    }
    return a.size() > b.size();
}

int main(){
    string n;
    map<string, int> mp;
    vector<string> v;
    while(cin>>n){
        if(check(n)){
            v.push_back(n);
            mp[n]++;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for(string x : v){
        if(mp[x] && x.size() > 1){
            cout<<x<<" "<<mp[x]<<endl;
            mp[x] = 0;
        }
    }


}