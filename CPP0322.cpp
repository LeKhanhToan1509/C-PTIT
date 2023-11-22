#include<bits/stdc++.h>

using namespace std;

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
int main(){
    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        cout<<sum(a, b)<<endl;
    }

}