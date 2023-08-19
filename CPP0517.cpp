#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int cnt = 0;
struct NhanVien {
    string hoTen;
    string gioiTinh;
    string ngaySinh;
    string diaChi;
    string maSoThue;
    string ngayKyHopDong;
};

void nhap(NhanVien &nv) {
    if(cnt == 0)    cin.ignore();
    cnt++;
    getline(cin, nv.hoTen);
    getline(cin, nv.gioiTinh);
    getline(cin, nv.ngaySinh);
    getline(cin, nv.diaChi);
    getline(cin, nv.maSoThue);
    getline(cin, nv.ngayKyHopDong);
}

void inds(NhanVien ds[], int N) {
    for (int i = 0; i < N; i++) {
        cout << setw(5) << setfill('0') << i + 1 << " ";
        cout << ds[i].hoTen << " ";
        cout << ds[i].gioiTinh << " ";
        cout << ds[i].ngaySinh << " ";
        cout << ds[i].diaChi << " ";
        cout << ds[i].maSoThue << " ";
        cout << ds[i].ngayKyHopDong << endl;
    }
}

int main() {
    struct NhanVien ds[50];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) nhap(ds[i]);
    inds(ds, N);
    return 0;
}
