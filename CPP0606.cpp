#include<bits/stdc++.h>

using namespace std;

class NhanVien{
private:
    string id, ten, gt, ns, dc, sdt, date;

public:
    NhanVien(){
        this->id = "00001";
        this->ten = "";
        this->gt = "";
        this->ns = "";
        this->dc = "";
        this->sdt = "";
        this->date = "";
    }
    friend ostream &operator << (ostream &out, NhanVien &a){
        out<<a.id<<" "<<a.ten<<" "<<a.ns<<" "<<a.gt<<" "<<a.dc<<" "<<a.sdt<<" "<<a.date<<endl;
        return out;
    }
    friend istream &operator >> (istream &in, NhanVien &a){
        getline(in, a.ten);
        getline(in, a.ns);
        getline(in, a.gt);
        getline(in, a.dc);
        getline(in, a.sdt);
        getline(in, a.date);
        return in;
    }
};
int main(){
    NhanVien a;
    cin >> a;
    cout << a;
    return 0;
}