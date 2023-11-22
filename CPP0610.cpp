#include<bits/stdc++.h>

using namespace std;

class PhanSo{
private:
    long long a, b;
public:
    PhanSo(long long a, long long b){
        this->a = a;
        this->b = b;
    }
    friend istream &operator >> (istream &in, PhanSo &a){
        in>>a.a>>a.b;
        return in;
    }
    friend ostream &operator<<(ostream &out, const PhanSo &a) {
        out << a.a << "/" << a.b;
        return out;
    }
    
    friend PhanSo operator+ (PhanSo &a, PhanSo &b){
        PhanSo c(1, 1);
        c.a = a.a*b.b + b.a*a.b;
        c.b = a.b*b.b;
        long long gcd = __gcd(c.a, c.b);
        c.a /= gcd;
        c.b /= gcd;
        return c;
    }
};


int main() {
	PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}