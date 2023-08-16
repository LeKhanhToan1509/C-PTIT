#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i = 0; i < s.size(); i++){
            if(!isdigit(s[i])){
                s[i] = ' ';
            }
        }
        stringstream ss(s);
        string tmp;
        set<int> se;
        while(ss>>tmp){
            se.insert(stoi(tmp));
        }
        cout<<*se.rbegin()<<endl;
    }

}