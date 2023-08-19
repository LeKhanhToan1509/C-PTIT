#include<bits/stdc++.h>

using namespace std;

struct ThiSinh{
    string name, ns;
    double a, b, c, sum;
};

void nhap(ThiSinh &a){
    getline(cin, a.name);
    getline(cin, a.ns);
    cin>>a.a>>a.b>>a.c;
    a.sum = a.a + a.b + a.c;
}

void in(ThiSinh a){
    cout<<a.name<<" "<<a.ns<<" "<<fixed<<setprecision(1)<<a.sum<<endl;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}