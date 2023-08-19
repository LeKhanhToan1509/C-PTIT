#include<bits/stdc++.h>

using namespace std;

long long sum(string a, string b){
    return stoll(a) + stoll(b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        for(char &x : s1){
            if(x == '6'){
                x = '5';
            }
        }
        for(char &x : s2){
            if(x == '6'){
                x = '5';
            }
        }
        cout<<sum(s1, s2);
        for(char &x : s1){
            if(x == '5'){
                x = '6';
            }
        }
        for(char &x : s2){
            if(x == '5'){
                x = '6';
            }
        }
        cout<<" "<<sum(s1, s2)<<endl;
    }

}