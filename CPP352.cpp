#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    map<string, int> mp;
    while(t--){
        string s;
        getline(cin, s);
        string tmp;
        string email = "";
        stringstream ss(s);
        vector<string> v;
        while(ss >> tmp){
            for(char &x : tmp){
                x = tolower(x);
            }
            v.push_back(tmp);
        }    
        int n = v.size();
        email += v[n-1];
        for(int i = 0; i < n-1; i++){
            email += v[i][0];
        }
        mp[email]++;
        if(mp[email] > 1){
            cout<<email<<mp[email]<<"@ptit.edu.vn\n";
        }
        else{
            cout<<email<<"@ptit.edu.vn\n";
        }
    }
    

}