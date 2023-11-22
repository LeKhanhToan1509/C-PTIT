#include<bits/stdc++.h>

using namespace std;

int main(){
    ifstream ss("DATA1.in");
    ifstream ss1("DATA2.in");
    set<string> se1, giao, hop;
    string s;
     while(ss >> s){
        for(char &x : s){
            x = tolower(x);
        }
        se1.insert(s);
        hop.insert(s);
    }
    while(ss1 >> s){
        for(char &x : s){
            x = tolower(x);
        }
        if(!se1.count(s)){
            hop.insert(s);
        }
        else{
            giao.insert(s);
        }
    }
    for(string x : hop){
        cout<<x<<" ";
    }
    cout<<endl;
    for(string x : giao){
        cout<<x<<" "; 
    }   
}