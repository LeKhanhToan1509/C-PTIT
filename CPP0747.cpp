#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        for(int i = 0; i <= s.size()-3; i++){
            if(s[i] == '1'){
                if(s[i+1] == '0' && s[i+2] == '0'){
                    for(int j = i; j <= i+2; j++){
                        s[j] = ' ';
                    }
                }
            }
        }
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            cout<<tmp;
        }
        cout<<endl;       
    }

}