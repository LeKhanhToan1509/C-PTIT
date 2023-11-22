#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        long long n;
        cin>>s>>n;
        long long du = 0;
        for(int i = 0; i < s.size(); i++){
            du = (du * 10 + (s[i] - '0'))%n;
        }       
        cout<<du<<endl;
    }

}