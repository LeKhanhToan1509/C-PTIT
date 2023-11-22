#include<bits/stdc++.h>

using namespace std;

string a, b;

string sum(string a, string b){
    string s;
    for(int i = 0; i < a.size(); i++){
        a[i] = a[i]-'0';
    }
    for(int j = 0; j < b.size(); j++){
        b[j] = b[j]-'0';
    }
    int i = a.size()-1;
    int j = b.size()-1;
    int du = 0;
    int kq;
    while(i >= 0 && j >= 0){
        kq = a[i] + b[j] + du;
        du = 0;
        if(kq > 9){
            kq -= 10;
            du = 1;
        }
        s += to_string(kq);
        i--;
        j--;
    }
    while(i >= 0){
        kq = a[i] + du;
        du = 0;
        if(kq > 9){
            kq -= 10;
            du = 1;
        }
        s += to_string(kq);
        i--;
    }
    while(j >= 0){
        kq = b[j] + du;
        du = 0;
        if(kq > 9){
            kq-=10;
            du = 1;
        }
        s += to_string(kq);
        j--;
    }
    if(du){
        s += '1';
    }
    reverse(s.begin(), s.end());
    return s;
}

string tich(string a, int b){
    if(b==0)    return "0";
    if(b==1)    return a;
    string res = tich(a, b/2);
    res = sum(res, res);
    if(b%2==0)  return res;
    else return sum(a, res);
}

void solve(){
    int cnt;
    string tmp = "0";
    reverse(b.begin(), b.end());
    for(int i = 0; i < b.size(); i++){
        cnt = i;
        string res = tich(a, (b[i] - '0'));
        while(cnt--){
            res += '0';
        }
        tmp = sum(tmp, res);
    }
    cout<<tmp<<endl;

}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        solve();       
    }

}