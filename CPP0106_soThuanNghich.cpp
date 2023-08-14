#include<bits/stdc++.h>

using namespace std;

int check(string s){
    int n = s.size();
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n-i-1])    return 0;
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        if(check(n))    cout<<"YES\n";
        else cout<<"NO\n";
    }
}