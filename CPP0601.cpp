#include<bits/stdc++.h>

using namespace std;

class SinhVien {
private:
    string hoTen;
    string lop;
    string ngaySinh;
    double diemGPA;

public:
    SinhVien() {
    }
    void nhap() {
        getline(cin, hoTen);
        getline(cin, lop);
        getline(cin, ngaySinh);
        if(ngaySinh[1] == '/')  ngaySinh = '0' + ngaySinh;
        if(ngaySinh[4] == '/')  ngaySinh.insert(3, "0");
        cin >> diemGPA;
    }

    void xuat() {
        cout << "B20DCCN001"
             << " " << hoTen << " " << lop << " " << ngaySinh << " " << fixed << setprecision(2) << diemGPA << endl;
    }
};

int main() {
    SinhVien a;
    a.nhap();
    a.xuat();
    return 0;
}
