#include<bits/stdc++.h>

using namespace std;

struct NhanVien{
    string name, gender, birth, add, sdt, date;

};

void nhap(NhanVien &a){
    getline(cin, a.name);
    getline(cin, a.gender);
    getline(cin, a.birth);
    getline(cin, a.add);
    getline(cin, a.sdt);
    getline(cin, a.date);
}

void in(NhanVien a){
    cout<<"00001 "<<a.name<<" "<<a.gender<<" "<<a.birth<<" "<<a.add<<" "<<a.sdt<<" "<<a.date;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
}