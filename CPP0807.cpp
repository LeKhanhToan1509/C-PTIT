#include<bits/stdc++.h>

using namespace std;

int main(){
    ifstream ss("DATA.in");
    int n, m, a;
    ss>>n>>m;
    set<int> se, se1;
    while(n--){
        ss >> a;
        se.insert(a);
    }
    while(m--){
        ss >> a;
        if(se.count(a)){
            se1.insert(a);
        }
    }
    for(int x : se1){
        cout<<x<<" ";
    }
}