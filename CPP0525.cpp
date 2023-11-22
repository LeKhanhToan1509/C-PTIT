#include<bits/stdc++.h>

using namespace std;

struct sv{
    int id;
    string ten, lop, msv;
    double a, b, c;
}; 

void in(double x){
    cout<<fixed<<setprecision(1)<<x<<" ";
}
void xuat(sv a){
    cout<<a.id<<" "<<a.msv<<" "<<a.ten<<" "<<a.lop<<" ";
    in(a.a);
    in(a.b);
    in(a.c);
    cout<<endl;
}

int cmp(sv a, sv b){
    return a.ten < b.ten;
}
int main(){
    int n;
    cin>>n;
    sv a[n];
    for(int i = 0; i < n; i++){
        
        cin.ignore();
        getline(cin, a[i].msv);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        cin>>a[i].a>>a[i].b>>a[i].c;
    }
    sort(a, a+n, cmp);
    for(int i = 0; i < n; i++){
        a[i].id = i+1;
        xuat(a[i]);
    }


}