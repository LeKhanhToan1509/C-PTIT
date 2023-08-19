#include<bits/stdc++.h>
using namespace std;

const int MAX_N = 1e3 + 5;
int a[MAX_N];
int n, k;
int final = 0;
void next_combination() {
    int i = k;
    while (i >= 1 && a[i] == n - k + i) {
        i--;
    }
    if (i == 0) final = 1;
    else {
        a[i]++;
        for (int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        final = 0;
        cin >> n >> k;
        for (int i = 1; i <= k; i++) { 
            a[i] = i;
            cout<<i;
        }
        cout<<" ";
       while(!final){
            next_combination();
            if(final == 1)  break;
            for (int i = 1; i <= k; i++) { 
                cout << a[i];
            }
            cout<<" ";
       }
       cout<<endl;
    }
    return 0;
}
