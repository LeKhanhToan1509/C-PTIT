#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    map<char, int> mp;
    char a[12] = {'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'u', 'o', 'i', 'y'};
    for(char x : a){
        mp[x]++;
    }
    for(char x : s){
        if(!mp[x]){
            cout<<'.'<<(char)tolower(x);
        }
    }

}