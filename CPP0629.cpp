#include<bits/stdc++.h>

using namespace std;

struct doanhnghiep
{
    string ten, ften;
    int sl;
};

int cmp(doanhnghiep a, doanhnghiep b){
    if(a.sl == b.sl){
        return a.ten < b.ten;
    }
    else 
    return a.sl > b.sl;
}
int main(){
    int n;
    cin>>n;
    doanhnghiep a[n];
    for(int i = 0; i < n; i++){
        cin.ignore();
        getline(cin, a[i].ten);
        getline(cin, a[i].ften);
        cin>>a[i].sl;
    }
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<l<<" DEN "<<r<<" SINH VIEN:\n";
        vector<doanhnghiep> v;
        for(doanhnghiep x : a){
            if(x.sl >= l && x.sl <= r)
                v.push_back(x);
        }
        sort(v.begin(), v.end(), cmp);
        for(doanhnghiep x : v){
            cout<<x.ten<<" "<<x.ften<<" "<<x.sl<<endl;
        }
    }
}