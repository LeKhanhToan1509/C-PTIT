#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore();
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<string> v;
        string tmp;
        while(ss>>tmp){
            v.push_back(tmp);
        }
        sort(v.begin(), v.end(), greater<string>());
        for(string x : v){
            cout<<x;
        }
        cout<<endl;
    }

}