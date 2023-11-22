#include <bits/stdc++.h>

using namespace std;

int cnt = 0;
struct SinhVien {
    int id;
    string ten, lop, ns;
    double gpa;
};

istream& operator >> (istream& in, SinhVien& a) {
    in.ignore();
    cnt++;
    a.id = cnt;
    getline(in, a.ten);
    stringstream ss(a.ten);
    string s, tmp;
    while(ss >> tmp){
        tmp[0] = toupper(tmp[0]);
        for(int i = 1; i < tmp.size(); i++){
            tmp[i] = tolower(tmp[i]);
        }
        s += tmp + " ";
    }
    s.pop_back();
    a.ten = s;
    getline(in, a.lop);
    getline(in, a.ns);
    if(a.ns[1] == '/')  a.ns = '0' + a.ns;
    if(a.ns[4] == '/')  a.ns.insert(3, "0");
    in >> a.gpa;
    return in;
}

ostream& operator << (ostream& out, SinhVien a) {
    out << "B20DCCN" << setfill('0') << setw(3) << a.id << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}