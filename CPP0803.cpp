#include<bits/stdc++.h>

using namespace std;

int main(){
    ifstream ss("DATA.in");
    int n;
    map<int, int> mp;
    while(ss >> n){
        mp[n] ++;
    }
    for(int i = 0; i <= 1000; i++){
        if(mp[i]){
            cout<<i<<" "<<mp[i]<<endl;
        }
    }
}