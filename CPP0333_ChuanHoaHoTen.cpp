#include<bits/stdc++.h>

using namespace std;

string chuanHoa(string s){
    s[0] = toupper(s[0]);
    for(int i = 1; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }
    return s;
}
int main(){
    string s;
    getline(cin, s);
    vector<string> v;
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        v.push_back(tmp);
    }
    for(int i = 0; i < v.size()-2; i++){
        cout<<chuanHoa(v[i])<<" ";
    }
    cout<<chuanHoa(v[v.size()-2])<<", ";
    for(char x : v[v.size()-1]){
        cout<<(char)toupper(x);
    }
}