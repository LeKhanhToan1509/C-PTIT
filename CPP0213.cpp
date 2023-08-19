#include <iostream>
using namespace std;

int used[2000] = {0};

void sieve() {
    int ans = 1;
    int preans = 0;
    used[ans] = 1;
    used[preans] = 1;
    while(ans + preans <= 1000){
        int sum = ans + preans;
        used[sum] = 1;
        preans = ans;
        ans = sum;
    }
}

int main() {
    int t;
    cin >> t;
    sieve();
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(used[a[i]]){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
