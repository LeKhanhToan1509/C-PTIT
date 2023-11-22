#include<bits/stdc++.h>

using namespace std;

int cnt = 0;
struct SinhVien{
    int id;
    string msv, ten, lop;
    double a, b, c;
};

void nhap(SinhVien &a){
    cnt++;
    cin.ignore();
    getline(cin, a.msv);
    getline(cin, a.ten);
    getline(cin, a.lop);
    cin>>a.a>>a.b>>a.c;
}

void in(double a){
    cout<<fixed<<setprecision(1)<<a<<" ";
}
void in_ds(SinhVien ds[], int n){
    for(int i = 0; i < n; i++){
        cout<<i+1<<" "<<ds[i].msv<<" "<<ds[i].ten<<" "<<ds[i].lop<<" ";
        in(ds[i].a);
        in(ds[i].b);
        in(ds[i].c);
        cout<<endl;
    }
}

int cmp(SinhVien a, SinhVien b){
    return a.msv < b.msv;
}

void sap_xep(SinhVien ds[], int n){
    sort(ds, ds+n, cmp);
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}