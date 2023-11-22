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
    sort(a, a+n, cmp);
    for(doanhnghiep x : a){
        cout<<x.ten<<" "<<x.ften<<" "<<x.sl<<endl;
    }
}