#include<bits/stdc++.h>

using namespace std;

struct SinhVien
{
    string name, id, ns;
    double gpa;
};

void nhap(SinhVien &a){
    getline(cin, a.name);
    getline(cin, a.id);
    getline(cin, a.ns);
    if(a.ns[1] == '/') a.ns = '0' + a.ns;
    if(a.ns[4] == '/') a.ns.insert(3, "0");
    cin>>a.gpa;
}

void in(SinhVien a){
    cout<<"B20DCCN001"<<" "<<a.name<<" "<<a.id<<" "<<a.ns<<" "<<fixed<<setprecision(2)<<a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}