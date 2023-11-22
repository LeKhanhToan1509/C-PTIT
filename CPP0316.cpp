#include<bits/stdc++.h>

using namespace std;

int solve(string s){
    int sum = 0;
    while(s.size() > 1){
        sum = 0;
        for(int i = 0; i < s.size(); i++){
            sum += s[i] - '0';
        }
        s = to_string(sum);
    }
    return s[0]-'0' == 9;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(solve(s)){
            cout<<"1\n";
        }
        else cout<<"0\n";
    }

}