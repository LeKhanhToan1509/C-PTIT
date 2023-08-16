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
        map<int, int> mp;
        for(int i = 0; i < s.size(); i++){
            if(isdigit(s[i])){
                mp[s[i]-'0']++;
            }
        }       
        for(int i = 0; i <= 9; i++){
            if(mp[i]){
                cout<<i<<" ";
                mp[i] = 0;
            }
        }
        cout<<endl;
    }

}