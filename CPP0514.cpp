#include<bits/stdc++.h>

using namespace std;

struct SinhVien{
    int id;
    string ten, lop, ns;
    double gpa;
};

string chuanHoa(string s){
    string s1;
    stringstream ss(s);
    string tmp;
    while(ss>>tmp){
        tmp[0] = toupper(tmp[0]);
        for(int i = 1; i < tmp.size(); i++){
            tmp[i] = tolower(tmp[i]);
        }
        s1 += tmp;
        s1 += " ";
    }
    return s1;
}

void nhap(SinhVien ds[], int n){
    for(int i = 0; i < n; i++){
        cin.ignore();
        ds[i].id = i+1;
        getline(cin, ds[i].ten);
        ds[i].ten = chuanHoa(ds[i].ten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ns);
        if(ds[i].ns[1] == '/')  ds[i].ns = '0' + ds[i].ns;
        if(ds[i].ns[4] == '/')  ds[i].ns.insert(3, "0");
        cin>>ds[i].gpa;
    }
}

void in(SinhVien ds[], int n){
    for(int i = 0; i < n; i++){
        cout<<"B20DCCN"<<setfill('0')<<setw(3)<<ds[i].id<<" "<<ds[i].ten<<" "<<ds[i].lop<<" "<<ds[i].ns<<" "<<fixed<<setprecision(2)<<ds[i].gpa<<endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}