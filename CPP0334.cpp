#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long sum = 0;
        string s;
        cin>>s;
        for(char &x : s){
            if(!isdigit(x)){
                x = ' ';
            }
        }       
        stringstream ss(s);
        string tmp;
        while(ss >> tmp){
            sum += stoll(tmp);
        }
        cout<<sum<<endl;
    }

}