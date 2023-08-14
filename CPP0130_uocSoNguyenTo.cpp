#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, maxPrime;
        cin >> n;
        int cnt = 0;
        while (n % 2 == 0) {
            n /= 2;
            cnt++;
        }
        while(cnt--)  cout<<"2 ";
        for (long long i = 3; i * i <= n; i += 2) {
            while (n % i == 0) {
                n /= i;
                cout<<i<<" ";
            }
        }
        if(n > 2){
            cout<<n;
        }
        cout<<endl;
    }
}
