#include<bits/stdc++.h>

using namespace std;

string a, b;

void solve(){
    int n = a.size();
    int m = b.size();
    for(char &x : a){
        x -= '0';
    }
    for(char &x : b){
        b -= '0';
    }
    reverse(a.begin(), a.end());
    reverse(a.begin(), a.end());
    char c[m*n+1];
     
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        solve(a, b);       
    }
    return 0;

}