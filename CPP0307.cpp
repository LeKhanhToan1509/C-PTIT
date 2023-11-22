#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        string tmp1, tmp2;
        vector<string> v1;
        stringstream ss(s1), ss1(s2);
        set<string> se, se1;
        while(ss1>>tmp1){
            se.insert(tmp1);
        }
        while(ss>>tmp2){
            if(!se.count(tmp2)){
                se1.insert(tmp2);
            }
        }
        for(string x : se1)
            cout<<x<<" ";
        cout<<endl;
    }


}