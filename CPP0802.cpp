#include<bits/stdc++.h>

using namespace std;

long long num(string s){
    long long sum = 0;
    for(int i = 0; i < s.size(); i++){
        sum += (s[i] - '0')*pow(10, s.size() - 1 - i);
    }
    return sum;
}

int check(string s){
    if(s.size() > 9)    return 0;
    for(char x : s){
        if(!isdigit(x)) return 0;
    }
    return 1;
}

int main(){
    ifstream fin("DATA.in");
    string s;
    long long sum = 0;
    while(fin>>s){
        if(check(s)){
            long long n = num(s);
            if(n <= 2147483647){
                sum += n;
            }
        }
    }
    cout<<sum;
}