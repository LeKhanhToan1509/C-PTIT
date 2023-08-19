#include<bits/stdc++.h>

using namespace std;

struct PhanSo
{
    long long a, b;
};

void nhap(PhanSo &a){
    cin>>a.a>>a.b;
}

void in(PhanSo a){
    cout<<a.a<<"/"<<a.b;
}

void rutgon(PhanSo &a){
    long long x = __gcd(a.a, a.b);
    a.a/=x;
    a.b/=x;
}

int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}