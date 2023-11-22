#include<bits/stdc++.h>

using namespace std;

int main(){
    ifstream ss("VANBAN.in");
    set<string> se;
    string s;
    while(ss >> s){
        for(char &x : s){
            x = tolower(x);
        }
        se.insert(s);
    }
    for(string x : se){
        cout<<x<<endl;
    }

}