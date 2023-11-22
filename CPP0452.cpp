#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        long long a[n], b[m], c[k];
        for(long long &x : a){
            cin >> x;
        }
        for(long long &x : b){
            cin >> x;
        }
        for(long long &x : c){
            cin >> x;
        }
        vector<long long> v;
        
        int i = 0, j = 0, l = 0;
        while (i < n && j < m && l < k) {
            if (a[i] == b[j] && b[j] == c[l]) {
                v.push_back(a[i]);
                i++;
                j++;
                l++;
            }
            else if (a[i] < b[j]) {
                i++;
            }
            else if (b[j] < c[l]) {
                j++;
            }
            else {
                l++;
            }
        }

        if(v.size()){
            for(long long x : v){
                cout << x << " ";
            }
            cout << endl;
        }
        else{
            cout << "-1\n";
        }
    }
    return 0;
}
