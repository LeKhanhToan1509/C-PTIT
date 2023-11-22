#include<bits/stdc++.h>

using namespace std;

int m(int a, int b){
    if(a < b)   return a;
    else return b;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int cnt = 0;
        for(char &x : s){
            x-='0';
        }
        int cs = 0;
        for(int i = 0; i < s.size(); i++){
            int sum = 0;
            int cs = 0;
            int len;
            for(len = 0; len < m(3, s.size() - i); len++){
                int j = i + len;
                sum = sum*10 + s[i];
                cs += s[i];
                if(sum % 8 == 0 && cs % 3 != 0)    cnt++;
            }
            if(sum % 8 == 0 && cs % 3 != 0 && len == 2){
                for(int j = i-1; j >= 0; j--){
                    cs += s[j];
                    if(cs%3!=0) cnt++;
                }
            }
        }       
        cout<<cnt<<endl;
    }
}