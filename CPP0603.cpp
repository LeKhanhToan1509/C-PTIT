#include<bits/stdc++.h>

using namespace std;

class SinhVien{
private:
    string ten, lop, bd, msv;
    double GPA;
public:
    SinhVien(){
        this->msv = "B20DCCN001";
        this->ten = "";
        this->lop = "";
        this->bd = "";
        this->GPA = 0; 
    }
      friend istream &operator >> (istream &is, SinhVien &a)
    {
        getline(is, a.ten);
        getline(is, a.lop);
        getline(is, a.bd);
        is >> a.GPA;  
        if(a.bd[2] != '/') a.bd.insert(a.bd.begin(), '0');
        if(a.bd[5] != '/') a.bd.insert(a.bd.begin() + 3, '0');
        return is;
    }
    friend ostream &operator << (ostream &os, SinhVien &a)
    {
        stringstream ss(a.ten);
        string tmp;
        vector<string> v;
        while(ss>>tmp){
            tmp[0] = toupper(tmp[0]);
            for(int i = 1; i < tmp.size(); i++){
                tmp[i] = tolower(tmp[i]);
            }
            v.push_back(tmp);
        }
        os << a.msv << ' ';
        for(string x : v){
            cout<<x<<" ";
        }
        os  << a.lop << ' ' << a.bd << ' ' << setprecision(2) << fixed << a.GPA;
        return os;
    }
};

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}