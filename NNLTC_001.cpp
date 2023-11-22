#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    map<int, int> mp;
    vector<int> v;
    while(cin>>n){
        if(mp[n] == 0){
            v.push_back(n);
        }
        mp[n]++;
    }
    for(int i = 0; i < v.size(); i++){
        cout<<v[i]<<" "<<mp[v[i]]<<endl;
    }
}