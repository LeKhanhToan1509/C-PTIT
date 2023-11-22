#include<bits/stdc++.h>

using namespace std;

struct vat{
    int id;
    string name, loai;
    double nhap, xuat, lai;
};

void xuat(vat a){
    cout<<a.id<<" "<<a.name<<" "<<a.loai<<" "<<fixed<<setprecision(2)<<a.lai<<endl;
}
int cmp(vat a, vat b){
    return a.lai > b.lai;
}
int main(){
    int n;
    cin>>n;
    vat a[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        a[i].id = i+1;
        getline(cin, a[i].name);
        getline(cin, a[i].loai);
        cin>>a[i].nhap>>a[i].xuat;
        a[i].lai = a[i].xuat - a[i].nhap;
    }
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        xuat(a[i]);
    }
    return 0;
}