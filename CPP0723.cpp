#include<bits/stdc++.h>

using namespace std;

string giaithua(char x){
    if(x == '1' || x == '0')    return "";
    if(x == '2')    return "2";
    if(x == '3')    return "3";
    if(x == '4')    return "223";
    if(x == '5')    return "5";
    if(x == '6')    return "35";
    if(x == '7')    return "7";
    if(x == '8')    return "7222";
    if(x == '9')    return "7332";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        string res;
        for(int i = 0; i < s.size(); i++){
            res += giaithua(s[i]);
        }
        sort(res.begin(), res.end(), greater<char>());
        cout<<res<<endl;
    }

}