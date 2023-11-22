#include<bits/stdc++.h>
#define ll long long

using namespace std;

struct PhanSo{
    ll tu, mau;
};

void rutgon(PhanSo &a){
    ll x = __gcd(a.tu, a.mau);
    a.tu/=x;
    a.mau/=x;
}

PhanSo tich(PhanSo a, PhanSo b){
    PhanSo c;
    c.tu = a.tu * b.tu;
    c.mau = a.mau *b.mau;
    rutgon(c);
    return c;
}
PhanSo sum(PhanSo a, PhanSo b){
    PhanSo c;
    c.tu = a.tu*b.mau + a.mau*b.tu;
    c.mau = a.mau*b.mau;
    rutgon(c);
    return c;
}

void process(PhanSo a, PhanSo b){
    PhanSo c = tich(sum(a, b), sum(a, b));
    PhanSo d = tich(tich(a, b), c);
    cout<<c.tu<<"/"<<c.mau<<" "<<d.tu<<"/"<<d.mau<<endl;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}