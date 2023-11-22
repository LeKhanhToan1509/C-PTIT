#include<bits/stdc++.h>

using namespace std;

class PhanSo {
private:
    long long a, b;

public:
    PhanSo() {
        this->a = 0;
        this->b = 1;
    }

    PhanSo(long long a, long long b) {
        this->a = a;
        this->b = b;
    }

    friend ostream &operator << (ostream &os, PhanSo &a) {
        os << a.a << "/" << a.b;
        return os;
    }

    friend istream &operator >> (istream &is, PhanSo &a) {
        is >> a.a >> a.b;
        return is;
    }

    void rutgon() {
        long long x = __gcd(a, b);
        a /= x;
        b /= x;
    }
};

int main() {
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}
