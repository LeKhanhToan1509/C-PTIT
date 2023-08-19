#include<bits/stdc++.h>

using namespace std;

struct PhanSo{
    long long a, b;
};

void nhap(PhanSo &a){
    cin>>a.a>>a.b;
}

void in(PhanSo a){
    cout<<a.a<<"/"<<a.b;
}

PhanSo tong(PhanSo a, PhanSo b){
    PhanSo c;
    c.a = a.a*b.b + b.a*a.b;
    c.b = a.b*b.b;
    long long x = __gcd(c.a, c.b);
    c.a /= x;
    c.b /= x;
    return c;
}

int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}