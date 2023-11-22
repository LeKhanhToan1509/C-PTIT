#include<bits/stdc++.h>

using namespace std;

struct Sinhvien{
    string msv, ten, lop, email, buss;
    int id;
};

void nhap(Sinhvien &a){
    getline(cin, a.msv);
    getline(cin, a.ten);
    getline(cin, a.lop);
    getline(cin, a.email);
    getline(cin, a.buss);    
}

void xuat(Sinhvien a){
    cout<<a.id<<" "<<a.msv<<" "<<a.ten<<" "<<a.lop<<" "<<a.email<<" "<<a.buss<<endl;
}

int cmp(Sinhvien a, Sinhvien b){
    return a.ten < b.ten;
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    Sinhvien a[n];
    for(int i = 0; i < n; i++){
        a[i].id = i+1;
        nhap(a[i]);
    }
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        vector<Sinhvien> v;
        for(Sinhvien x : a){
            if(x.buss == s){
                v.push_back(x);
            }
        }
        sort(v.begin(), v.end(), cmp);
        for(Sinhvien x : v){
            xuat(x);
        }
    }

}