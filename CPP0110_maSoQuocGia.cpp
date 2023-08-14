#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        int l;
        for(int i = 0; i < n; i++){
            if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4'){
               l = i;  
            }
        }
        for(int i = 0; i < n; i++){
            if(i < l || i > l+2){
                cout<<s[i];
            }
        }
        cout<<endl;
    }
}